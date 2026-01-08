#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_bridge.py
================
将 JetArm (Leader) 的关节角度实时同步到 DummyRobot (Follower)。

支持三种从臂后端：
1. fibre/ref_tool (默认，与 ODrive-style DummyRobot 固件交互)
2. 串口文本协议（dummy_usb_lib.robot.robot_com）--serial
3. 纯软件仿真 --sim

使用示例
---------
真实硬件 + 串口协议：
    python3 teleop_bridge.py \
        --leader_port /dev/ttyUSB0 \
        --follower_path /dev/ttyACM0 \
        --serial

软件仿真：
    python3 teleop_bridge.py --sim
"""

from __future__ import annotations
import time
import argparse
import sys
import struct
from pathlib import Path
from typing import Dict, List

# === JetArm SDK ==============================================================
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
except ModuleNotFoundError:
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction  # type: ignore

# === 常量映射 ===============================================================
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
# --- 新版线性映射 (参照 teleop_mapping.py) ---
# 以主臂零姿态 [0,-90,90,-90,0] → 从臂 home [0,90,0,0,0] 为基准
# 对应线性公式: f = a*l + b
LINEAR_MAP = {
    1: (1.0, 0.0),   # J1 同向
    2: (1.0, 90.0),  # J2 +90
    3: (1.0, 0.0),   # J3 同向
    5: (1.0, 90.0),  # J5 +90
    6: (1.0, 0.0),   # J6 同向
}

# === Leader 辅助函数 =========================================================

def unload_servos(board: Board, servo_ids):
    """让主臂进入柔顺示教（掉电）。"""
    print("[INFO] 释放主臂力矩，进入示教模式…")
    CMD_LOAD_OR_UNLOAD = 31
    for sid in servo_ids:
        try:
            payload = struct.pack('<B', 0)
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as e:
            print(f"[WARN] 舵机 {sid} 卸载失败: {e}")
        time.sleep(0.01)


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

# === 主程序 ==================================================================

def main():
    parser = argparse.ArgumentParser(description="JetArm→DummyRobot 实时桥接")
    parser.add_argument("--leader_port", default="/dev/ttyUSB0", help="主臂串口设备")
    parser.add_argument("--follower_path", default="/dev/ttyACM0", help="从臂串口或 fibre 路径")
    parser.add_argument("--loop_hz", type=int, default=50, help="主循环频率")
    parser.add_argument("--sim", action="store_true", help="软件仿真从臂，不需硬件")
    parser.add_argument("--serial", action="store_true", help="使用 dummy_usb_lib 串口协议，而非 fibre")
    parser.add_argument("--filter_alpha", type=float, default=0.5,
                        help="低通滤波系数 α(0~1)。值越小，反应越慢；1 表示不滤波")
    parser.add_argument("--deadband_deg", type=float, default=0.35,
                        help="防抖死区阈值（°）。角度变化小于该值则忽略")
    args = parser.parse_args()

    use_serial = args.serial and not args.sim

    # --- 连接主臂 -----------------------------------------------------------
    try:
        print(f"[INFO] 连接主臂 {args.leader_port} …")
        leader = Board(device=args.leader_port)
        leader.enable_reception(True)
    except Exception as e:
        print(f"[FATAL] 无法连接主臂: {e}")
        sys.exit(1)

    # --- 连接从臂 -----------------------------------------------------------
    follower_axes = None  # fibre 模式下用
    follower_com = None   # 串口模式下用

    if args.sim:
        import dummy_robot_simulator as ref_tool  # type: ignore
        follower = ref_tool.find_any()
        follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
        ChannelBrokenException = Exception
        AXIS_STATE_IDLE = 1
        print("[INFO] 已连接模拟从臂。")
    elif use_serial:
        from dummy_usb_lib.robot.robot_com import RobotSerialCom, clip_joints, HARD_LIMITS  # type: ignore
        follower_com = RobotSerialCom(port=args.follower_path, baud=115200, timeout=0.5)
        follower_com.start()
        # 上电
        try:
            print("[INFO] 发送 !START 启用从臂...")
            follower_com.write_line("!START")
            time.sleep(0.3)
        except Exception as _e:
            print(f"[WARN] !START 发送失败: {_e}")
        ChannelBrokenException = Exception
        AXIS_STATE_IDLE = 1
        print(f"[INFO] 串口模式连接从臂成功: {args.follower_path}")
    else:
        try:
            import ref_tool  # type: ignore
            from fibre.protocol import ChannelBrokenException  # type: ignore
            try:
                from ref_tool.utils import AXIS_STATE_IDLE  # type: ignore
            except (ImportError, AttributeError):
                AXIS_STATE_IDLE = 1
            follower = ref_tool.find_any(path=args.follower_path)
            follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
            print("[INFO] fibre 模式连接从臂成功。")
        except Exception as e:
            print(f"[FATAL] 无法连接从臂: {e}")
            sys.exit(1)

    # --- 使主臂进入示教 -----------------------------------------------
    unload_servos(leader, LEADER_JOINT_IDS)
    time.sleep(0.5)
    init_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
    print("[INFO] 初始主臂角度: " + ", ".join([f"J{i+1}:{a:.1f}°" for i, a in enumerate(init_angles)]))

    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 开始主循环 {args.loop_hz} Hz (Ctrl+C 退出)…")

    try:
        while True:
            t0 = time.time()
            # 读取主臂角度
            raw_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)
            # --- 一阶低通滤波 -----------------------------
            if not hasattr(main, "_filt_buf"):
                main._filt_buf = raw_angles  # type: ignore
            leader_angles = []
            for prev, curr in zip(main._filt_buf, raw_angles):  # type: ignore
                flt = prev * (1 - args.filter_alpha) + curr * args.filter_alpha
                leader_angles.append(flt)
            main._filt_buf = leader_angles

            # 映射到从臂
            follower_target_angles: Dict[int, float] = {}
            follower_target_counts: Dict[int, int] = {}
            # 初始化上一帧指令缓存
            if not hasattr(main, "_prev_cmd"):
                main._prev_cmd = {}

            for lid, angle_deg in enumerate(leader_angles, start=1):
                if lid not in LEADER_TO_FOLLOWER_MAP:
                    continue
                fid = LEADER_TO_FOLLOWER_MAP[lid]
                a, b = LINEAR_MAP.get(fid, (1.0, 0.0))
                mapped_angle = a * angle_deg + b
                # 死区抑制：若与上一帧差异小于 deadband 则复用上一帧
                prev_ang = main._prev_cmd.get(fid, None)
                if prev_ang is not None and abs(mapped_angle - prev_ang) < args.deadband_deg:
                    mapped_angle = prev_ang

                follower_target_angles[fid] = mapped_angle
                main._prev_cmd[fid] = mapped_angle
                follower_target_counts[fid] = angle_to_counts(mapped_angle, fid)

            # --- 发送到从臂 --------------------------------------------
            if use_serial:
                # 填充 6 关节角列表（按顺序 J1..J6），未映射的保持 0
                angle_list: List[float] = [0.0] * 6
                for fid, ang in follower_target_angles.items():
                    angle_list[fid - 1] = ang
                # 限幅
                clipped = clip_joints(angle_list, HARD_LIMITS)
                cmd = ">" + ",".join(f"{a:.1f}" for a in clipped)
                try:
                    follower_com.write_line(cmd)
                except Exception as ee:
                    sys.stderr.write(f"\n[WARN] 串口发送失败: {ee}\n")
            else:
                for fid, cnt in follower_target_counts.items():
                    try:
                        follower_axes[fid].controller.pos_setpoint = cnt  # type: ignore
                    except ChannelBrokenException:
                        raise
                    except Exception as ee:
                        sys.stderr.write(f"\n[WARN] 写入从臂 J{fid} 失败: {ee}\n")
                        sys.stderr.flush()

            # --- 日志输出 ---------------------------------------------
            leader_str = ", ".join([f"J{i+1}:{a:6.1f}°" for i, a in enumerate(leader_angles)])
            follower_ids = [1, 2, 3, 4, 5, 6]
            follower_values = [follower_target_angles.get(fid, 0.0) for fid in follower_ids]
            follower_str = ", ".join([f"J{fid}:{val:6.1f}°" for fid, val in zip(follower_ids, follower_values)])
            line = f"Leader: [ {leader_str} ] | Follower Set: [ {follower_str} ]"
            sys.stdout.write("\x1b[2K\r" + line)
            sys.stdout.flush()

            elapsed = time.time() - t0
            if elapsed < loop_dt:
                time.sleep(loop_dt - elapsed)
    except (KeyboardInterrupt, ChannelBrokenException):
        print("\n[INFO] 用户中断或通道断开，正在安全退出…")
    finally:
        if use_serial and follower_com:
            follower_com.stop()
        elif not args.sim:
            try:
                for ax in follower_axes.values():  # type: ignore
                    ax.requested_state = AXIS_STATE_IDLE  # type: ignore
            except Exception:
                pass
        print("[INFO] 桥接程序已终止。")


if __name__ == "__main__":
    main()
