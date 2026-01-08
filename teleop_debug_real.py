#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_debug_real.py
====================
仅用于 **连接真实 Dummy-Robot 硬件** 的调试脚本。不会回退到软件模拟器。
若无法加载 `ref_tool` 或连接失败，将直接报错退出，方便第一时间定位问题。

使用方式：
    python3 teleop_debug_real.py --leader_port /dev/ttyUSB2

可选参数：
    --loop_hz       主循环频率 (默认 50)
    --safety_deg    启动安全阈值 (默认 15°)
    --plain         终端简单输出（不使用 ANSI 动态刷新）
    --mock_leader   如果没有主臂硬件，以模拟脉冲信号代替
"""

from __future__ import annotations

import argparse
import sys
import time
import io
import contextlib
from pathlib import Path
from typing import Dict, List

# ========== 导入主臂 SDK ==========
try:
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore
except ModuleNotFoundError:
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore

# ========== 导入映射逻辑 ==========
import teleop_mapping as tm  # 本仓库文件

# ========== 导入 Dummy-Robot CLI 工具 ==========
try:
    import ref_tool  # type: ignore
except ModuleNotFoundError as exc:
    print(f"[FATAL] 未找到 ref_tool (Dummy-Robot SDK): {exc}\n请确认已将 CLI-Tool 路径加入 PYTHONPATH")
    sys.exit(1)

# ===================== 配置 & 工具函数 =====================

FOLLOWER_HOME_ANGLES: Dict[int, float] = {1: 0, 2: 90, 3: 0, 5: 0, 6: 0}
CONFIG = {"scale": 1.0, "offsets": {}}


def apply_manual_adjustments(angles: Dict[int, float]) -> Dict[int, float]:
    return {fid: ang * CONFIG["scale"] + CONFIG["offsets"].get(fid, 0.0) for fid, ang in angles.items()}


class _MockBoard:
    def __init__(self):
        self._start = time.time()

    def enable_reception(self, _flag: bool):
        pass

    def bus_servo_read_position(self, sid: int):
        elapsed = time.time() - self._start
        import math
        min_p, max_p, mid_p, *_ = tm.LEADER_JOINT_MAP[sid]
        amp = (max_p - min_p) / 2 * 0.9
        return (int(mid_p + amp * math.sin(2 * math.pi * 0.1 * elapsed + sid)),)


# ===================== 主入口 =====================

def main():  # noqa: C901
    p = argparse.ArgumentParser("JetArm → Dummy-Robot 实机调试")
    p.add_argument("--leader_port", default="/dev/ttyUSB2")
    p.add_argument("--loop_hz", type=int, default=50)
    p.add_argument("--safety_deg", type=float, default=15.0)
    p.add_argument("--plain", action="store_true")
    p.add_argument("--mock_leader", action="store_true")
    p.add_argument("--duration", type=float, default=0.0, help="运行时长 (秒)，0 为无限循环")
    args = p.parse_args()

    # —— Leader ——
    if args.mock_leader:
        print("[INFO] 使用 Mock Leader（无硬件）")
        leader = _MockBoard()
    else:
        try:
            print(f"[INFO] 连接主臂 {args.leader_port} …")
            leader = Board(device=args.leader_port)
            leader.enable_reception(True)
        except Exception as exc:
            print(f"[FATAL] 无法连接主臂: {exc}")
            sys.exit(1)

    # —— Follower (真实) ——
    try:
        follower = ref_tool.find_any()
        follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
        print("[INFO] 成功连接 Dummy-Robot.")
    except Exception as exc:
        print(f"[FATAL] 连接 Dummy-Robot 失败: {exc}")
        sys.exit(1)

    # —— 校验 & 循环 ——
    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 主循环 {args.loop_hz} Hz，Ctrl+C 退出…\n")

    # 初始安全校验
    init_angles = tm.pulse_to_angle(tm.read_positions(leader, tm.LEADER_JOINT_IDS), tm.LEADER_JOINT_IDS)
    follower_init = apply_manual_adjustments(tm.calculate_follower_angles(init_angles))
    max_err = max(abs(follower_init[fid] - FOLLOWER_HOME_ANGLES.get(fid, 0)) for fid in follower_init)
    if max_err > args.safety_deg:
        print(f"[FATAL] 初始姿态偏差 {max_err:.1f}° 超过阈值 {args.safety_deg}°，请校准后重试。")
        sys.exit(1)

    start_time = time.time()
    try:
        while True:
            if args.duration > 0 and (time.time() - start_time) >= args.duration:
                print(f"\n[INFO] 已达到限定时长 {args.duration}s，自动退出…")
                break
            t0 = time.time()
            pulses = tm.read_positions(leader, tm.LEADER_JOINT_IDS)
            leader_angles = tm.pulse_to_angle(pulses, tm.LEADER_JOINT_IDS)
            follower_angles = apply_manual_adjustments(tm.calculate_follower_angles(leader_angles))
            counts = {fid: tm.angle_to_counts(ang, fid) for fid, ang in follower_angles.items()}

            with contextlib.redirect_stdout(io.StringIO()):
                for fid, cnt in counts.items():
                    follower_axes[fid].controller.pos_setpoint = cnt

            # 输出
            lstr = ", ".join([f"J{i+1}:{a:6.1f}°" for i, a in enumerate(leader_angles)])
            fstr = ", ".join([f"J{fid}:{follower_angles.get(fid,0):6.1f}°" for fid in [1,2,3,5,6]])
            line1 = f"Leader:   [ {lstr} ]"
            line2 = f"Follower: [ {fstr} ]"
            if args.plain:
                print(line1); print(line2)
            else:
                out = f"\x1b[2K\r{line1}\n\x1b[2K\r{line2}\x1b[1A"
                sys.stdout.write(out); sys.stdout.flush()
            slp = loop_dt - (time.time() - t0)
            if slp>0: time.sleep(slp)
    except KeyboardInterrupt:
        sys.stdout.write("\n\n"); print("[INFO] 用户中断，退出…")


if __name__ == "__main__":
    main()

