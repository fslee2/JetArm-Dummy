#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
goto_predefined_pose.py
=======================

Description:
  一个简单的调试脚本，用于在启动后命令 DummyRobot (从臂) 移动到一个
  预设的关节角度位置。

Usage:
  python3 goto_predefined_pose.py --path usb

"""

import time
import argparse
import sys
from pathlib import Path

# --- Follower Arm (DummyRobot) SDK Import ---
try:
    import ref_tool
    from fibre.protocol import ChannelBrokenException
except ModuleNotFoundError:
    # 假设脚本与 teleop_bridge.py 在同一目录，并使用其相对路径查找 SDK
    sdk_root = Path(__file__).resolve().parent / "Dummy-Robot-main/3.Software/CLI-Tool"
    fibre_path = sdk_root / "fibre/python"
    for p in [sdk_root, fibre_path]:
        if p.exists() and str(p) not in sys.path:
            sys.path.insert(0, str(p))
    try:
        import ref_tool
        from fibre.protocol import ChannelBrokenException
    except (ModuleNotFoundError, ImportError):
        print("[ERROR] 无法加载 DummyRobot SDK (ref_tool/fibre)，请检查路径。")
        sys.exit(1)

# --- Constants and Mappings ---
# 从 teleop_bridge.py 复制而来，确保转换逻辑一致
FOLLOWER_ARM_PARAMS = {
    1: {'gear_ratio': 50, 'cpr': 8192}, # J1
    2: {'gear_ratio': 30, 'cpr': 8192}, # J2
    3: {'gear_ratio': 30, 'cpr': 8192}, # J3
    4: {'gear_ratio': 24, 'cpr': 8192}, # J4 (未使用)
    5: {'gear_ratio': 30, 'cpr': 8192}, # J5
    6: {'gear_ratio': 50, 'cpr': 8192}, # J6
}

# --- Helper Function ---
def angle_to_counts(angle: float, follower_joint_id: int) -> int:
    """将单个角度转换为指定从臂关节的编码器计数值。"""
    if follower_joint_id not in FOLLOWER_ARM_PARAMS:
        print(f"[WARN] 关节 ID {follower_joint_id} 不在参数字典中，跳过。")
        return 0
    params = FOLLOWER_ARM_PARAMS[follower_joint_id]
    count = (angle / 360.0) * params['cpr'] * params['gear_ratio']
    return int(count)

# --- Main Application Logic ---
def main():
    parser = argparse.ArgumentParser(description="将 DummyRobot 移动到预设位置")
    parser.add_argument("--path", default="usb", help="从臂的连接路径 (例如: 'usb' 或 'serial:/dev/ttyACM0')")
    args = parser.parse_args()

    # --- 1. 定义目标位姿 ---
    # 目标角度: [0, -90, 90, -90, 0]
    # 对应关节: J1, J2, J3, J5, J6
    target_angles_deg = {
        1: 0,
        2: -90,
        3: 90,
        5: -90, # 注意 J4 被跳过
        6: 0,
    }

    print("[INFO] --- 开始执行位姿移动脚本 ---")

    # --- 2. 连接到从臂 ---
    follower_arm = None
    try:
        print(f"[INFO] 正在搜索路径 '{args.path}' 上的从臂...")
        follower_arm = ref_tool.find_any(path=args.path)
        print("[SUCCESS] 从臂已连接。")
        # 建立关节 ID 到 axis 对象的映射
        follower_axes = {i + 1: getattr(follower_arm, f'axis{i}') for i in range(6)}
    except Exception as e:
        print(f"[FATAL] 无法连接到从臂: {e}")
        sys.exit(1)

    # --- 3. 计算并发送指令 ---
    print("\n[INFO] 正在计算并发送目标位置...")
    try:
        for joint_id, angle in target_angles_deg.items():
            # 将角度转换为计数值
            counts = angle_to_counts(angle, joint_id)
            print(f"  - 目标: J{joint_id} | 角度: {angle:>6.1f}° | 计数值 (pos_setpoint): {counts:>8d}")
            
            # 发送指令
            if joint_id in follower_axes:
                follower_axes[joint_id].controller.pos_setpoint = counts
            else:
                print(f"[WARN] 无法找到关节 {joint_id} 对应的 axis 对象。")
        
        print("\n[SUCCESS] 所有目标位置指令已发送。")
        print("[INFO] 机械臂将开始移动到指定位姿。脚本执行完毕。")

    except ChannelBrokenException:
        print("\n[FATAL] 与从臂的连接中断。")
    except Exception as e:
        print(f"\n[ERROR] 在发送指令时发生未知错误: {e}")
    finally:
        # 脚本结束，但电机将保持在目标位置
        pass

if __name__ == "__main__":
    main()



