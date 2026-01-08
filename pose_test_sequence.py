#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
pose_test_sequence.py
=====================
依次将 *从臂 DummyRobot* 移动到给定角度姿态，每个姿态停留 5 秒，
方便人工验证映射是否正确。

预置姿态（角度）：
1. [0,  0, 90, -90,   0]
2. [0,  0, 45,   0,   0]
3. [0, 45, 90,   0,   0]
4. [-45,0, 90,   0,   0]

说明：
- 跳过 J4，下标对应 follower 关节 J1,J2,J3,J5,J6。
- 若要验证主臂，可把此脚本逻辑改为发主臂脉冲；这里默认驱动 DummyRobot
  以角度→计数方式移动。
"""
from __future__ import annotations
import time
import sys
from pathlib import Path
import contextlib
import io

# 导入 DummyRobot
try:
    import dummy_robot_simulator as ref_tool  # type: ignore
except ModuleNotFoundError:
    print("[ERROR] dummy_robot_simulator.py not found")
    sys.exit(1)

# 导入 angle_to_counts 参数与函数
SCRIPT_DIR = Path(__file__).resolve().parent
sys.path.insert(0, str(SCRIPT_DIR))
from teleop_mapping import FOLLOWER_ARM_PARAMS, angle_to_counts  # type: ignore

# 预定义姿态（仅 J1,J2,J3,J5,J6）
POSES = [
    {1: 0, 2: 0, 3: 90, 5: -90, 6: 0},
    {1: 0, 2: 0, 3: 45, 5:   0, 6: 0},
    {1: 0, 2: 45, 3: 90, 5:  0, 6: 0},
    {1: -45,2: 0, 3: 90, 5:  0, 6: 0},
]


def main():
    follower = ref_tool.find_any()
    follower_axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}

    print("[INFO] Starting pose sequence… (Ctrl+C to stop)")
    try:
        for idx, pose in enumerate(POSES, start=1):
            print(f"\n[INFO] Moving to pose {idx}: {pose}")
            with contextlib.redirect_stdout(io.StringIO()):
                for fid, deg in pose.items():
                    cnt = angle_to_counts(deg, fid)
                    follower_axes[fid].controller.pos_setpoint = cnt
            # 打印
            msg = ", ".join([f"J{fid}:{deg}°" for fid, deg in pose.items()])
            print(f"Target Angles → {msg}")
            time.sleep(5)
    except KeyboardInterrupt:
        print("\n[INFO] Interrupted by user.")


if __name__ == "__main__":
    main()

