#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_bridge_sim.py
====================
一个简化的、纯仿真模式的主从遥操作桥接脚本。
将 JetArm (Leader) 的关节角度实时同步到仿真的 DummyRobot (Follower)。

特性
----
- 仅支持仿真模式，无硬件依赖。
- 简洁的代码，专注于核心遥操作逻辑。
- 稳定可靠的单行刷新状态显示。

运行示例
---------
python3 teleop_bridge_sim.py --leader_port /dev/ttyUSB0

作者: Cascade
日期: 2026-01-08
"""

from __future__ import annotations
import time
import argparse
import sys
import struct
from pathlib import Path
import io
import contextlib

# --- Leader Arm SDK 导入 ---
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
except ModuleNotFoundError:
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    try:
        from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
    except ModuleNotFoundError:
        print("[ERROR] Leader Arm SDK 未找到，请检查 ROS2 SDK 路径。")
        sys.exit(1)

# --- 仿真器导入 ---
try:
    import dummy_robot_simulator as ref_tool
except ModuleNotFoundError:
    print("[ERROR] 仿真器 'dummy_robot_simulator.py' 未找到。")
    print("[INFO] 请确保该文件与本脚本在同一目录下。")
    sys.exit(1)


# --- 常量与映射 ---
LEADER_JOINT_IDS = [1, 2, 3, 4, 5]
LEADER_JOINT_MAP = {
    1: [0, 1000, 500, -120, 120, 0],
    2: [0, 1000, 500, 30, -210, -90],
    3: [0, 1000, 500, 120, -120, 0],
    4: [0, 1000, 500, 30, -210, -90],
    5: [0, 1000, 500, -120, 120, 0],
}

FOLLOWER_ARM_PARAMS = {
    1: {'gear_ratio': 50, 'cpr': 8192},
    2: {'gear_ratio': 30, 'cpr': 8192},
    3: {'gear_ratio': 30, 'cpr': 8192},
    4: {'gear_ratio': 24, 'cpr': 8192},
    5: {'gear_ratio': 30, 'cpr': 8192},
    6: {'gear_ratio': 50, 'cpr': 8192},
}

LEADER_TO_FOLLOWER_MAP = {1: 1, 2: 2, 3: 3, 4: 5, 5: 6}
JOINT_DIRECTION_INVERSIONS = {1: 1, 2: -1, 3: -1, 4: 1, 5: 1, 6: 1}

# --- 辅助函数 ---
def unload_servos(board: Board, servo_ids):
    """兼容旧版 SDK 的舵机卸载函数。"""
    print("[INFO] 释放主臂力矩，进入示教模式…")
    CMD_LOAD_OR_UNLOAD = 31
    for sid in servo_ids:
        try:
            payload = struct.pack('<B', 0)  # 0 表示卸载力矩
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as e:
            sys.stderr.write(f"[WARN] 舵机 {sid} 卸载失败: {e}\n")
        time.sleep(0.01)
    print("[INFO] 主臂已进入柔顺示教模式。")

def read_positions(board: Board, servo_ids):
    pulses = [board.bus_servo_read_position(sid) for sid in servo_ids]
    return [p[0] if p else 0 for p in pulses]

def pulse_to_angle(pulses, servo_ids):
    angles = []
    for p, sid in zip(pulses, servo_ids):
        m = LEADER_JOINT_MAP[sid]
        angle = m[3] + ((p - m[0]) / (m[1] - m[0])) * (m[4] - m[3])
        angles.append(angle)
    return angles

def angle_to_counts(angle, follower_joint_id):
    params = FOLLOWER_ARM_PARAMS[follower_joint_id]
    return int((angle / 360.0) * params['cpr'] * params['gear_ratio'])

# --- 入口函数 ---
def main():
    parser = argparse.ArgumentParser(description="JetArm→DummyRobot 纯仿真遥操作桥接")
    parser.add_argument("--leader_port", default="/dev/ttyUSB0", help="主臂串口设备")
    parser.add_argument("--loop_hz", type=int, default=50, help="主循环频率")
    args = parser.parse_args()

    print("[INFO] --- 纯仿真桥接程序启动 ---")
    
    try:
        print(f"[INFO] 连接主臂 {args.leader_port}…")
        leader = Board(device=args.leader_port)
        leader.enable_reception(True)
    except Exception as e: 
        print(f"[FATAL] 无法连接主臂: {e}")
        sys.exit(1)

    try:
        follower = ref_tool.find_any()
        follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
    except Exception as e: 
        print(f"[FATAL] 无法模拟从臂: {e}")
        sys.exit(1)

    unload_servos(leader, LEADER_JOINT_IDS)
    time.sleep(0.5)

    init_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
    print("[INFO] 初始主臂角度: " + ", ".join([f"J{i+1}:{a:.1f}°" for i, a in enumerate(init_angles)]))

    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 开始主循环 {args.loop_hz} Hz (Ctrl+C 退出)…")
    # 首次打印后，为第二行留出空间
    sys.stdout.write("\n") 

    try:
        while True:
            t0 = time.time()
            leader_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
            
            follower_target_counts = {}
            
            with contextlib.redirect_stdout(io.StringIO()):
                for lid, angle_deg in enumerate(leader_angles, start=1):
                    if lid not in LEADER_TO_FOLLOWER_MAP: continue
                    fid = LEADER_TO_FOLLOWER_MAP[lid]
                    mapped_angle = angle_deg * JOINT_DIRECTION_INVERSIONS.get(fid, 1)
                    cnt = angle_to_counts(mapped_angle, fid)
                    follower_target_counts[fid] = cnt
                    try: 
                        follower_axes[fid].controller.pos_setpoint = cnt
                    except Exception:
                        pass

            leader_str = ", ".join([f"J{i+1}:{a:6.1f}°" for i, a in enumerate(leader_angles)])
            follower_ids = sorted(LEADER_TO_FOLLOWER_MAP.values())
            follower_values = [follower_target_counts.get(fid, 0) for fid in follower_ids]
            follower_str = ", ".join([f"J{fid}: {val:7d}" for fid, val in zip(follower_ids, follower_values)])
            
            line1 = f"Leader:   [ {leader_str} ]"
            line2 = f"Follower: [ {follower_str} ]"

            # ANSI escape codes: 
            # \x1b[2K: 清除整行, \r: 回车, \x1b[1A: 光标上移一行
            output = f"\x1b[2K\r{line1}\n\x1b[2K\r{line2}\x1b[1A"
            sys.stdout.write(output)
            sys.stdout.flush()

            elapsed = time.time() - t0
            if elapsed < loop_dt: time.sleep(loop_dt - elapsed)

    except KeyboardInterrupt:
        # 移到两行之外，避免覆盖最后的状态
        sys.stdout.write("\n\n")
        print("[INFO] 用户中断，正在安全退出…")
    finally:
        print("[INFO] 桥接程序已终止。")

if __name__ == "__main__":
    main()
