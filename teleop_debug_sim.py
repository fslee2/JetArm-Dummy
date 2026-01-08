#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_debug_sim.py
===================
仅用于 **软件模拟器 (dummy_robot_simulator.py)** 的调试脚本。
不会尝试连接真实 Dummy-Robot，保证离线可运行。

示例：
    python3 teleop_debug_sim.py --mock_leader --plain
"""

from __future__ import annotations

import argparse
import sys
import time
import io
import contextlib
from pathlib import Path
from typing import Dict, List

try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore
except ModuleNotFoundError:
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore

import teleop_mapping as tm
import dummy_robot_simulator as ref_tool  # 软件模拟器始终存在

FOLLOWER_HOME_ANGLES: Dict[int, float] = {1: 0, 2: 90, 3: 0, 5: 0, 6: 0}
CONFIG = {"scale": 1.0, "offsets": {}}


def apply_manual_adjustments(angles: Dict[int, float]) -> Dict[int, float]:
    return {fid: ang * CONFIG["scale"] + CONFIG["offsets"].get(fid, 0.0) for fid, ang in angles.items()}


class _MockBoard:
    def __init__(self):
        self._start = time.time()

    def enable_reception(self, _):
        pass

    def bus_servo_read_position(self, sid: int):
        elapsed = time.time() - self._start
        import math
        min_p, max_p, mid_p, *_ = tm.LEADER_JOINT_MAP[sid]
        amp = (max_p - min_p) / 2 * 0.9
        return (int(mid_p + amp * math.sin(2 * math.pi * 0.1 * elapsed + sid)),)


# =====================

def main():
    p = argparse.ArgumentParser("JetArm → Dummy-Robot 软件模拟调试")
    p.add_argument("--leader_port", default="/dev/ttyUSB2")
    p.add_argument("--loop_hz", type=int, default=50)
    p.add_argument("--plain", action="store_true")
    p.add_argument("--mock_leader", action="store_true")
    p.add_argument("--duration", type=float, default=0.0, help="运行时长 (秒)，0=无限")
    args = p.parse_args()

    if args.mock_leader:
        leader = _MockBoard()
        print("[INFO] 使用 Mock Leader (无硬件)")
    else:
        try:
            leader = Board(device=args.leader_port)
            leader.enable_reception(True)
            print(f"[INFO] 已连接主臂 {args.leader_port}")
        except Exception as exc:
            print(f"[FATAL] 无法连接主臂: {exc}\n请使用 --mock_leader 离线调试")
            sys.exit(1)

    follower = ref_tool.find_any()
    axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
    print("[INFO] 已启动 Dummy-Robot 软件模拟器")

    dt = 1.0 / args.loop_hz
    print(f"[INFO] 主循环 {args.loop_hz} Hz，Ctrl+C 退出…\n")
    start_time = time.time()

    try:
        while True:
            if args.duration>0 and time.time()-start_time>=args.duration:
                print(f"\n[INFO] 已达到限定时长 {args.duration}s，自动退出…")
                break
            t0 = time.time()
            pulses = tm.read_positions(leader, tm.LEADER_JOINT_IDS)
            leader_ang = tm.pulse_to_angle(pulses, tm.LEADER_JOINT_IDS)
            follower_ang = apply_manual_adjustments(tm.calculate_follower_angles(leader_ang))
            counts = {fid: tm.angle_to_counts(ang, fid) for fid, ang in follower_ang.items()}

            with contextlib.redirect_stdout(io.StringIO()):
                for fid, cnt in counts.items():
                    axes[fid].controller.pos_setpoint = cnt

            lstr = ", ".join([f"J{i+1}:{a:6.1f}°" for i, a in enumerate(leader_ang)])
            fstr = ", ".join([f"J{fid}:{follower_ang.get(fid,0):6.1f}°" for fid in [1,2,3,5,6]])
            line1, line2 = f"Leader:   [ {lstr} ]", f"Follower: [ {fstr} ]"
            if args.plain:
                print(line1); print(line2)
            else:
                out = f"\x1b[2K\r{line1}\n\x1b[2K\r{line2}\x1b[1A"; sys.stdout.write(out); sys.stdout.flush()
            slp = dt - (time.time() - t0)
            if slp>0: time.sleep(slp)
    except KeyboardInterrupt:
        print("\n[INFO] 退出软件模拟调试…")


if __name__ == "__main__":
    main()

