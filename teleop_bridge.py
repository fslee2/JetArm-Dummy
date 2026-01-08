#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_bridge.py
================
高性能主从桥接脚本，将 JetArm (Leader) 的关节角度实时同步到 DummyRobot (Follower)。

新增功能
---------
1. `--sim`   : 无硬件时启动软件仿真，依赖 `dummy_robot_simulator.py`。
2. `--loop_hz` 可调主循环频率（默认 50Hz）。
3. 在终端实时刷新主从臂状态，输出格式清晰，带有关节标签。

依赖安装
---------
真实硬件模式：
    pip install pyserial fibre
仿真模式：
    无外部依赖。

运行示例
---------
真实硬件：
    python3 teleop_bridge.py --leader_port /dev/ttyUSB0 --follower_path usb
仿真模式：
    python3 teleop_bridge.py --sim

作者: Cascade
日期: 2026-01-08
"""

from __future__ import annotations
import time
import argparse
import sys
import struct
from pathlib import Path

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
            print(f"[WARN] 舵机 {sid} 卸载失败: {e}")
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
    parser = argparse.ArgumentParser(description="JetArm→DummyRobot 实时遥操作桥接")
    parser.add_argument("--leader_port", default="/dev/ttyUSB0", help="主臂串口设备")
    parser.add_argument("--follower_path", default="usb", help="从臂路径（非仿真模式下有效）")
    parser.add_argument("--loop_hz", type=int, default=50, help="主循环频率")
    parser.add_argument("--sim", action="store_true", help="启用软件仿真，无物理从臂")
    args = parser.parse_args()

    if args.sim:
        import dummy_robot_simulator as ref_tool
        ChannelBrokenException = Exception
        AXIS_STATE_IDLE = 1
        print("[INFO] 已启用软件仿真模式，无需硬件。")
    else:
        try:
            import ref_tool
            from fibre.protocol import ChannelBrokenException
            from ref_tool.utils import AXIS_STATE_IDLE
        except ModuleNotFoundError:
            sdk_root = Path(__file__).resolve().parent / "Dummy-Robot-main/3.Software/CLI-Tool"
            fibre_path = sdk_root / "fibre/python"
            for p in [sdk_root, fibre_path]:
                if p.exists() and str(p) not in sys.path: sys.path.insert(0, str(p))
            try:
                import ref_tool
                from fibre.protocol import ChannelBrokenException
                from ref_tool.utils import AXIS_STATE_IDLE
            except ModuleNotFoundError:
                print("[ERROR] 无法加载 DummyRobot SDK，请检查依赖或使用 --sim 模式。")
                sys.exit(1)

    print("[INFO] --- 桥接程序启动 ---")
    try:
        print(f"[INFO] 连接主臂 {args.leader_port}…")
        leader = Board(device=args.leader_port)
        leader.enable_reception(True)
    except Exception as e: print(f"[FATAL] 无法连接主臂: {e}"); sys.exit(1)

    # --- 从臂连接 --- 
    # 重定向 stdout 以捕获并隔离来自 ref_tool 的不必要的打印输出，防止破坏单行刷新
    original_stdout = sys.stdout
    if args.sim:
        sys.stdout = sys.stderr

    try:
        print(f"[INFO] 连接从臂 (路径: {args.follower_path if not args.sim else 'simulated'})…")
        follower = ref_tool.find_any() if args.sim else ref_tool.find_any(path=args.follower_path)
        follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
        print("[INFO] 从臂连接成功。")
    except Exception as e:
        sys.stdout = original_stdout # 确保在出错时恢复 stdout
        print(f"[FATAL] 无法连接或模拟从臂: {e}")
        sys.exit(1)
    finally:
        # 无论成功失败，都恢复原始的 stdout
        sys.stdout = original_stdout

    unload_servos(leader, LEADER_JOINT_IDS)
    time.sleep(0.5)

    init_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
    print("[INFO] 初始主臂角度: " + ", ".join([f"J{i+1}:{a:.1f}°" for i, a in enumerate(init_angles)]))

    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 开始主循环 {args.loop_hz} Hz (Ctrl+C 退出)…")

    try:
        while True:
            t0 = time.time()
            leader_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
            
            follower_target_angles = {}
            follower_target_counts = {}
            for lid, angle_deg in enumerate(leader_angles, start=1):
                if lid not in LEADER_TO_FOLLOWER_MAP: continue
                
                fid = LEADER_TO_FOLLOWER_MAP[lid]
                mapped_angle = angle_deg * JOINT_DIRECTION_INVERSIONS.get(fid, 1)
                follower_target_angles[fid] = mapped_angle
                
                cnt = angle_to_counts(mapped_angle, fid)
                follower_target_counts[fid] = cnt
                
                try: follower_axes[fid].controller.pos_setpoint = cnt
                except ChannelBrokenException: raise
                except Exception as ee:
                    # 避免打断单行刷新输出：将警告输出到 stderr 并先换行
                    sys.stderr.write(f"\n[WARN] 写入从臂 J{fid} 失败: {ee}\n")
                    sys.stderr.flush()

            # --- 实时日志输出 ---
            leader_str = ", ".join([f"J{i+1}:{a:6.1f}°" for i, a in enumerate(leader_angles)])
            
            follower_ids = sorted(LEADER_TO_FOLLOWER_MAP.values())
            if args.sim:
                follower_values = [follower_target_counts.get(fid, 0) for fid in follower_ids]
                follower_str = ", ".join([f"J{fid}: {val:7d}" for fid, val in zip(follower_ids, follower_values)])
                label = "Follower Setpoints"
            else:
                follower_values = [follower_target_angles.get(fid, 0.0) for fid in follower_ids]
                follower_str = ", ".join([f"J{fid}: {val:6.1f}°" for fid, val in zip(follower_ids, follower_values)])
                label = "Follower Angles"

            # 单行刷新输出（对齐 show_leader_angles.py 的风格）
            line = f"Leader Angles: [ {leader_str} ] | {label}: [ {follower_str} ]"
            # 使用 ANSI escape code 清除整行并回车，确保在所有终端下单行刷新
            sys.stdout.write(f"\x1b[2K\r{line}")
            sys.stdout.flush()

            elapsed = time.time() - t0
            if elapsed < loop_dt: time.sleep(loop_dt - elapsed)

    except (KeyboardInterrupt, ChannelBrokenException):
        print("\n[INFO] 用户中断或通道断开，正在安全退出…")
    finally:
        print() # 确保光标换行
        if not args.sim:
            try:
                print("[INFO] 令从臂进入空闲状态…")
                for ax in follower_axes.values(): ax.requested_state = AXIS_STATE_IDLE
            except Exception: pass
        print("[INFO] 桥接程序已终止。")

if __name__ == "__main__":
    main()
