#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_mapping.py
=================
将主臂关节角度实时映射为从臂关节坐标（计数值）。

映射基准
--------
主臂 “零点” 姿态:  [0, -90, 90, -90, 0]  (J1‒J5)
对应从臂 “Home” 姿态: [0,  90,  0,   0,   0]  (J1,J2,J3,J5,J6)

本文档跳过从臂 J4。

终端输出
--------
参考 teleop_bridge_sim.py 的双行刷新技巧，但本脚本只输出一行（Follower
Coords）。为避免信息过长导致闪烁，仍保留双行刷新逻辑的第二行占位并立即
回退，可在绝大多数终端上实现“单行动态刷新”效果。

用法示例
---------
python3 teleop_mapping.py --leader_port /dev/ttyUSB0
"""

from __future__ import annotations
import time
import argparse
import sys
import struct
from pathlib import Path
import io
import contextlib

# ===================== SDK & 仿真器引入 =====================
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
except ModuleNotFoundError:
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction  # type: ignore

try:
    import dummy_robot_simulator as ref_tool  # type: ignore
except ModuleNotFoundError:
    print("[ERROR] 缺少 dummy_robot_simulator.py。请放置到同目录或 Python 路径下。")
    sys.exit(1)

# ===================== 常量定义 =====================
LEADER_JOINT_IDS = [1, 2, 3, 4, 5]

# JetArm 脉冲*→角度映射表  [minPulse, maxPulse, midPulse, maxDeg, minDeg, midDeg]
LEADER_JOINT_MAP = {
    1: [0, 1000, 500, -120, 120, 0],
    2: [0, 1000, 500, 30, -210, -90],
    3: [0, 1000, 500, 120, -120, 0],
    4: [0, 1000, 500, 30, -210, -90],
    5: [0, 1000, 500, -120, 120, 0],
}

# DummyRobot 每关节计数参数
FOLLOWER_ARM_PARAMS = {
    1: {"gear_ratio": 50, "cpr": 8192},
    2: {"gear_ratio": 30, "cpr": 8192},
    3: {"gear_ratio": 30, "cpr": 8192},
    4: {"gear_ratio": 24, "cpr": 8192},  # 未使用
    5: {"gear_ratio": 30, "cpr": 8192},
    6: {"gear_ratio": 50, "cpr": 8192},
}

# 主臂 → 从臂 关节编号映射 (跳过 follower J4)
LEADER_TO_FOLLOWER_MAP = {1: 1, 2: 2, 3: 3, 4: 5, 5: 6}
# 从臂方向反转（1 表示同向，-1 表示反向）
# J3 与主臂方向同向，不反转
JOINT_DIRECTION_INVERSIONS = {1: 1, 2: -1, 3: 1, 5: 1, 6: 1}

# 基准姿态
LEADER_ZERO_ANGLES = {1: 0, 2: -90, 3: 90, 4: -90, 5: 0}
FOLLOWER_HOME_ANGLES = {1: 0, 2: 90, 3: 0, 5: 0, 6: 0}

# ===================== 工具函数 =====================

def unload_servos(board: Board, servo_ids):
    """卸载主臂舵机力矩，便于手动示教。"""
    CMD_LOAD_OR_UNLOAD = 31
    print("[INFO] 进入示教模式 (卸载力矩)…")
    for sid in servo_ids:
        try:
            payload = struct.pack("<B", 0)  # 0 → 卸载
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as exc:  # pylint: disable=broad-except
            sys.stderr.write(f"[WARN] 卸载舵机 {sid} 失败: {exc}\n")
        time.sleep(0.02)


def read_positions(board: Board, servo_ids):
    """批量读取脉冲位置。未读到返回 0。"""
    pulses = [board.bus_servo_read_position(sid) for sid in servo_ids]
    return [p[0] if p else 0 for p in pulses]


def pulse_to_angle(pulses, servo_ids):
    """将脉冲转角度。"""
    angles = []
    for p, sid in zip(pulses, servo_ids):
        # 使用与 show_leader_angles.py 相同的公式，保证主臂显示一致
        min_p, max_p, _mid_p, max_deg, min_deg, _mid_deg = LEADER_JOINT_MAP[sid]
        pulse_range = max_p - min_p
        angle_range = min_deg - max_deg  # 注意符号方向
        deg = max_deg + (p - min_p) / pulse_range * angle_range
        angles.append(deg)
    return angles


def angle_to_counts(angle_deg: float, follower_joint_id: int) -> int:
    """角度→计数。"""
    params = FOLLOWER_ARM_PARAMS[follower_joint_id]
    return int(angle_deg / 360.0 * params["cpr"] * params["gear_ratio"])


def calculate_follower_angles(leader_angles):
    """根据最新标定点，使用线性公式 f = a*l + b 做映射"""
    follower_angles: dict[int, float] = {}

    for lid, l_angle in enumerate(leader_angles, start=1):
        if lid not in LEADER_TO_FOLLOWER_MAP:
            continue
        fid = LEADER_TO_FOLLOWER_MAP[lid]

        # 逐关节线性映射参数 (a, b)
        if fid == 1:       # J1
            a, b = 1.0, 0.0
        elif fid == 2:     # J2 : l + 90 → f
            a, b = 1.0, 90.0
        elif fid == 3:     # J3 : 1:1
            a, b = 1.0, 0.0
        elif fid == 5:     # J5 : l + 90 → f
            a, b = 1.0, 90.0
        elif fid == 6:     # J6 : 1:1 （如后续有偏置再调）
            a, b = 1.0, 0.0
        else:
            a, b = 1.0, 0.0

        follower_angles[fid] = a * l_angle + b

    return follower_angles

# ===================== 主入口 =====================

def main():
    parser = argparse.ArgumentParser(description="主臂→从臂 映射输出 (单行刷新)")
    parser.add_argument("--leader_port", default="/dev/ttyUSB2", help="主臂串口设备文件")
    parser.add_argument("--loop_hz", type=int, default=50, help="刷新频率 (Hz)")
    args = parser.parse_args()

    # 连接主臂
    try:
        print(f"[INFO] 连接主臂 {args.leader_port} …")
        leader = Board(device=args.leader_port)
        leader.enable_reception(True)
    except Exception as exc:  # pylint: disable=broad-except
        print(f"[FATAL] 无法连接主臂: {exc}")
        sys.exit(1)

    # 获取从臂模拟器
    try:
        follower = ref_tool.find_any()
        follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
    except Exception as exc:  # pylint: disable=broad-except
        print(f"[FATAL] 无法连接从臂模拟器: {exc}")
        sys.exit(1)

    unload_servos(leader, LEADER_JOINT_IDS)

    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 开始映射循环 {args.loop_hz} Hz (Ctrl+C 退出)…")
    sys.stdout.write("\n")  # 为单行刷新预留首行

    try:
        while True:
            t0 = time.time()

            # —— 读取主臂角度 ——
            leader_angles = pulse_to_angle(read_positions(leader, LEADER_JOINT_IDS), LEADER_JOINT_IDS)

            # —— 计算从臂目标角度 ——
            follower_angles = calculate_follower_angles(leader_angles)

            # —— 角度→计数 & 发送 ——
            follower_counts = {}
            with contextlib.redirect_stdout(io.StringIO()):  # 屏蔽模拟器打印
                for fid, deg in follower_angles.items():
                    cnt = angle_to_counts(deg, fid)
                    follower_counts[fid] = cnt
                    try:
                        follower_axes[fid].controller.pos_setpoint = cnt
                    except Exception:  # pylint: disable=broad-except
                        pass

            # —— 构造输出字符串 (主臂 + 从臂) ——
            leader_str = ", ".join(
                [f"J{i+1}:{ang:6.1f}°" for i, ang in enumerate(leader_angles)]
            )
            follower_ids_order = [1, 2, 3, 5, 6]
            follower_str = ", ".join(
                [f"J{fid}:{follower_angles.get(fid, 0):6.1f}°" for fid in follower_ids_order]
            )
            line1 = f"Leader Angles:   [ {leader_str} ]"
            line2 = f"Follower Angles: [ {follower_str} ]"

            # 双行刷新: 打印两行后回到上一行，实现动态更新
            out = f"\x1b[2K\r{line1}\n\x1b[2K\r{line2}\x1b[1A"
            sys.stdout.write(out)
            sys.stdout.flush()

            # 限频
            sleep_time = loop_dt - (time.time() - t0)
            if sleep_time > 0:
                time.sleep(sleep_time)

    except KeyboardInterrupt:
        sys.stdout.write("\n\n")
        print("[INFO] 用户取消，程序退出…")


if __name__ == "__main__":
    main()
