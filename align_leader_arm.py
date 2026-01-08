#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
align_leader_arm.py
=====================

Description:
  一个用于对齐 JetArm (主臂) 的调试脚本。
  它会在启动后，将主臂在指定时间内平滑移动到一个预设的关节角度，
  该位姿对应于从臂的 Home 位置，便于进行物理映射关系的调试。

Usage:
  python3 align_leader_arm.py --device /dev/ttyUSB0

"""

import time
import argparse
import sys
from pathlib import Path

# --- Leader Arm (JetArm) SDK Import ---
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board
except ModuleNotFoundError:
    # 假设脚本与 teleop_bridge.py 在同一目录，并使用其相对路径查找 SDK
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    try:
        from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board
    except ModuleNotFoundError:
        print("[ERROR] Leader Arm SDK 未找到，请检查 ROS2 SDK 路径。")
        sys.exit(1)

# --- Constants and Mappings ---
# JetArm 脉冲-角度转换关系表
# 格式: { servo_id: [pulse_min, pulse_max, pulse_center, angle_min, angle_max, angle_at_center] }
LEADER_JOINT_MAP = {
    1: [0, 1000, 500, -120, 120, 0],    # J1
    2: [0, 1000, 500, 30, -210, -90],   # J2
    3: [0, 1000, 500, 120, -120, 0],   # J3
    4: [0, 1000, 500, 30, -210, -90],   # J4
    5: [0, 1000, 500, -120, 120, 0],   # J5
}

# --- Helper Function ---
def angle_to_pulse(angle: float, servo_id: int) -> int:
    """将单个角度转换为指定舵机的脉冲值。"""
    if servo_id not in LEADER_JOINT_MAP:
        raise ValueError(f"舵机 ID {servo_id} 不在 LEADER_JOINT_MAP 中")
    
    m = LEADER_JOINT_MAP[servo_id]
    pulse_min, pulse_max = m[0], m[1]
    angle_min, angle_max = m[3], m[4]
    
    pulse_range = pulse_max - pulse_min
    angle_range = angle_max - angle_min
    
    # 执行转换
    pulse = pulse_min + ((angle - angle_min) / angle_range) * pulse_range
    
    # 确保脉冲值在有效范围内
    return max(pulse_min, min(pulse_max, int(pulse)))

# --- Main Application Logic ---
def main():
    parser = argparse.ArgumentParser(description="将 JetArm 移动到对齐位姿")
    parser.add_argument("--device", default="/dev/ttyUSB0", help="JetArm 的串口设备")
    parser.add_argument("--duration", type=float, default=2.0, help="移动过程的持续时间（秒）")
    args = parser.parse_args()

    # --- 1. 定义目标位姿 (单位: 度) ---
    # 该位姿用于对齐从臂的 Home 位置 [0, 0, 90, 0, 0, 0]
    target_angles_deg = {
        1: 0,      # J1
        2: -90,    # J2
        3: 90,     # J3
        4: -90,    # J4
        5: 0,      # J5
    }

    print("[INFO] --- 开始执行 JetArm 对齐脚本 ---")

    # --- 2. 连接到主臂 ---
    try:
        print(f"[INFO] 正在连接到 {args.device}...")
        board = Board(device=args.device)
        board.enable_reception(True)
        print("[SUCCESS] JetArm 已连接。")
    except Exception as e:
        print(f"[FATAL] 无法连接到 JetArm: {e}")
        sys.exit(1)

    # --- 3. 计算目标脉冲值并准备指令 ---
    print("\n[INFO] 正在计算目标脉冲值...")
    positions_to_set = []
    for servo_id, angle in target_angles_deg.items():
        # 将角度转换为脉冲值
        pulse = angle_to_pulse(angle, servo_id)
        positions_to_set.append([servo_id, pulse])
        
        # 打印注释，方便调试
        print(f"  - 目标: J{servo_id} | 角度: {angle:>6.1f}° | 计算脉冲 (pos_setpoint): {pulse:>5d}")

    # --- 4. 发送平滑移动指令 ---
    try:
        print(f"\n[INFO] 正在发送移动指令，将在 {args.duration} 秒内完成...")
        board.bus_servo_set_position(args.duration, positions_to_set)
        
        # 等待移动完成
        time.sleep(args.duration + 0.5) # 额外增加 0.5s 缓冲
        
        print("\n[SUCCESS] 移动完成。舵机保持力矩，可以进行物理测量。")
        print("[INFO] 脚本执行完毕。")

    except Exception as e:
        print(f"\n[ERROR] 在发送移动指令时发生错误: {e}")

if __name__ == "__main__":
    main()
