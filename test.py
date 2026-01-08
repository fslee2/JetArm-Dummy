#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
move_to_pose_once.py
--------------------
一次性脚本：上电 → 把 JetArm 移到给定角度 →
           同步把 DummyRobot 移到映射后的对应角度(或 counts)。

用法示例（真实从臂）:
    python3 move_to_pose_once.py

用法示例（只调试 Dummy 仿真）:
    python3 move_to_pose_once.py --sim
"""
import time
import sys
import struct
import argparse
from pathlib import Path

# ======== 导入 JetArm SDK ========
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import (
        Board, PacketFunction)
except ModuleNotFoundError:
    ROS2_SRC = Path(__file__).resolve().parent / "ROS2/src"
    if ROS2_SRC.exists() and str(ROS2_SRC) not in sys.path:
        sys.path.insert(0, str(ROS2_SRC))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import (
        Board, PacketFunction)

# ======== 导入 DummyRobot SDK 或仿真 ========
def import_follower(sim: bool):
    if sim:
        import dummy_robot_simulator as ref_tool
        return ref_tool, None  # AXIS_STATE_IDLE 无需
    try:
        import ref_tool
        from ref_tool.utils import AXIS_STATE_IDLE
        return ref_tool, AXIS_STATE_IDLE
    except ModuleNotFoundError:
        SDK_ROOT = Path(__file__).resolve().parent / "Dummy-Robot-main/3.Software/CLI-Tool"
        FIBRE_PATH = SDK_ROOT / "fibre/python"
        for p in [SDK_ROOT, FIBRE_PATH]:
            if p.exists() and str(p) not in sys.path:
                sys.path.insert(0, str(p))
        import ref_tool
        from ref_tool.utils import AXIS_STATE_IDLE
        return ref_tool, AXIS_STATE_IDLE

# ======== 主臂脉冲->角度映射表 ========
LEADER_MAP = {
    1: [0, 1000, 500, -120, 120],
    2: [0, 1000, 500, 30, -210],
    3: [0, 1000, 500, 120, -120],
    4: [0, 1000, 500, 30, -210],
    5: [0, 1000, 500, -120, 120],
}

def angle_to_pulse(angle: float, sid: int) -> int:
    pmin, pmax, _, amin, amax = LEADER_MAP[sid]
    return int(pmin + (angle - amin) / (amax - amin) * (pmax - pmin))

# ======== Follower 角度→counts ========
FOLLOWER_GEAR = {1:50, 2:30, 3:30, 5:30, 6:50}
CPR = 8192
def angle_to_counts(f_angle: float, jid: int) -> int:
    return int(f_angle / 360 * CPR * FOLLOWER_GEAR[jid])

# ======== 映射关系 ========
LEADER2FOLLOWER = {1:1, 2:2, 3:3, 4:5, 5:6}

# ======== 目标角度序列 ========
TARGET_LEADER = {1:0, 2:-90, 3:90, 4:-90, 5:0}

# ---------------- 主逻辑 ----------------
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--leader_port", default="/dev/ttyUSB2")
    ap.add_argument("--sim", action="store_true")
    args = ap.parse_args()

    # 连接 Leader
    board = Board(device=args.leader_port)
    board.enable_reception(True)
    print("[INFO] Leader 连接成功")

    # 连接 Follower
    ref_tool, AXIS_IDLE = import_follower(args.sim)
    follower = ref_tool.find_any() if args.sim else ref_tool.find_any(path="usb")
    axes = {i+1: getattr(follower, f"axis{i}") for i in range(6)}
    print("[INFO] Follower 连接成功")

    # --- 主臂上电并移动 ---
    print("[ACTION] Leader 上电并移动到目标角度…")
    move_list = []
    for sid, deg in TARGET_LEADER.items():
        pulse = angle_to_pulse(deg, sid)
        move_list.append([sid, pulse])
    # 上电
    CMD_LOAD_OR_UNLOAD = 31
    for sid in TARGET_LEADER:
        board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO,
                        [CMD_LOAD_OR_UNLOAD, sid] + list(struct.pack("<B", 1)))
        time.sleep(0.02)
    # 发送目标位置，移动时间 2s
    board.bus_servo_set_position(2.0, move_list)
    time.sleep(2.2)

    # --- 从臂移动 ---
    print("[ACTION] Follower 移动到对应角度/counts…")
    for lid, deg in TARGET_LEADER.items():
        fid = LEADER2FOLLOWER[lid]
        cnt = angle_to_counts(deg, fid)
        axes[fid].controller.pos_setpoint = cnt
    print("[DONE] 已发送全部 pos_setpoint")

    # 真实硬件可选：几秒后进入空闲
    if not args.sim:
        time.sleep(3)
        for ax in axes.values():
            ax.requested_state = AXIS_IDLE

if __name__ == "__main__":
    main()