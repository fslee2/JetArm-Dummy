#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
teleop_debug_node.py
===================
非侵入式调试脚本 (Plan 模式)
---------------------------------
本脚本在**完全不修改**现有 `teleop_mapping.py`、`DummyRobot` 以及主臂 SDK 的前提下，
通过外部中继的方式完成以下工作：

1. 连接主臂 (Leader) SDK，周期性读取关节脉冲并转换为角度。
2. 调用 `teleop_mapping.calculate_follower_angles()` 将主臂角度映射为从臂角度。
3. 将映射前后的数据以人类友好的格式输出到终端，便于比对。
4. 安全校验：仅当 **初始差值** （映射后的从臂角度 vs Home 角度）全部小于阈值
   （默认 15°）时，才激活同步并向从臂发送控制指令。
5. 在无硬件或真实 DummyRobot 库缺失的情况下，自动回退至
   `dummy_robot_simulator.py` 所提供的模拟对象，或静默跳过下行发送。

运行方式
---------
python3 teleop_debug_node.py \
    --leader_port /dev/ttyUSB2 \
    --loop_hz 50 \
    --safety_deg 15

备注：若仅做离线验证，可再加 `--dry_run` 参数，完全禁止向从臂发送数据。
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
    # 与 teleop_mapping.py 中的逻辑保持一致，自动修正 PYTHONPATH
    sdk_path = Path(__file__).resolve().parent / "ROS2/src"
    if sdk_path.exists() and str(sdk_path) not in sys.path:
        sys.path.insert(0, str(sdk_path))
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore

# ========== 导入映射函数 ==========
try:
    import teleop_mapping as tm  # 本仓库同级文件
except ModuleNotFoundError as exc:
    print(f"[FATAL] 未找到 teleop_mapping.py: {exc}")
    sys.exit(1)

# 连接从臂的 Python 模块将在解析参数后按需导入

# ========== 可调配置参数 ==========
# 所有偏置 / 比例因子均集中于此，便于快速实验调整。
CONFIG = {
    "scale": 1.0,  # 全局比例缩放（如有需要）
    "offsets": {   # follower 关节角度偏置，键=关节号
        # 例如：1: 5.0 ，表示在映射值基础上再 +5°
    },
}

# follower Home 姿态（与 teleop_mapping 的常量保持一致，若后者调整可同步更新）
FOLLOWER_HOME_ANGLES: Dict[int, float] = {1: 0, 2: 90, 3: 0, 5: 0, 6: 0}


def apply_manual_adjustments(follower_angles: Dict[int, float]) -> Dict[int, float]:
    """应用全局 scale 及单关节 offset，返回新字典（不修改原对象）。"""
    adjusted: Dict[int, float] = {}
    for fid, ang in follower_angles.items():
        ang_adj = ang * CONFIG["scale"] + CONFIG["offsets"].get(fid, 0.0)
        adjusted[fid] = ang_adj
    return adjusted


def connect_follower(sim_mode: bool):
    """连接 DummyRobot (ref_tool) 或软件模拟器。"""
    module_order = ("ref_tool", "dummy_robot_simulator") if sim_mode else ("ref_tool",)
    for mod_name in module_order:
        try:
            module = __import__(mod_name)
            follower = module.find_any()
            axes = {i + 1: getattr(follower, f"axis{i}") for i in range(6)}
            print(f"[INFO] 成功连接从臂 via {mod_name}.")
            return axes
        except ModuleNotFoundError:
            continue
        except Exception as exc:
            print(f"[WARN] 连接从臂失败 ({mod_name}): {exc}")
    return None


def calc_initial_error_deg(
    follower_target: Dict[int, float], home: Dict[int, float]
) -> float:
    """计算 max|target - home|，用于安全门限评估。"""
    max_err = 0.0
    for fid, tgt in follower_target.items():
        if fid not in home:
            continue
        diff = abs(tgt - home[fid])
        max_err = max(max_err, diff)
    return max_err


# ===================== 主入口 =====================


class _MockBoard:
    """在 --mock_leader 模式下，用于离线生成示例脉冲。"""
    def __init__(self):
        self._start = time.time()

    def enable_reception(self, _flag: bool):
        # 模拟接口占位
        pass

    def bus_servo_read_position(self, sid: int):
        # 生成简单的正弦波示例脉冲（0~1000）
        elapsed = time.time() - self._start
        import math
        min_p, max_p, mid_p, *_ = tm.LEADER_JOINT_MAP[sid]
        amp = (max_p - min_p) / 2.0 * 0.9  # 预留10%裕量
        center = mid_p
        pulse = int(center + amp * math.sin(2 * math.pi * 0.1 * elapsed + sid))
        return (pulse,)  # 与真实 SDK 返回格式对齐


def main():  # noqa: C901 — 保持可读性
    parser = argparse.ArgumentParser(description="主臂→从臂 中继调试节点")
    parser.add_argument("--leader_port", default="/dev/ttyUSB2", help="主臂串口设备")
    parser.add_argument("--loop_hz", type=int, default=50, help="循环频率 (Hz)")
    parser.add_argument(
        "--safety_deg", type=float, default=15.0, help="启动安全阈值 (°)")
    parser.add_argument(
        "--dry_run", action="store_true", help="禁止向从臂发送任何指令")
    parser.add_argument(
        "--plain", action="store_true", help="简单输出模式 (兼容无 ANSI 终端)")
    parser.add_argument(
        "--mock_leader", action="store_true", help="模拟主臂 (无硬件调试)")
    parser.add_argument(
        "--sim", action="store_true", help="显式使用软件模拟从臂 (dummy_robot_simulator)")
    args = parser.parse_args()

    # —— 连接主臂 ——
    # —— 连接主臂 ——
    if args.mock_leader:
        print("[INFO] 使用 Mock Leader (无硬件)")
        leader = _MockBoard()
    else:
        try:
            print(f"[INFO] 连接主臂 {args.leader_port} …")
            leader = Board(device=args.leader_port)
            leader.enable_reception(True)
        except Exception as exc:  # pylint: disable=broad-except
            print(f"[FATAL] 无法连接主臂: {exc}\n    如需离线调试请加入 --mock_leader")
            sys.exit(1)

    # —— 连接从臂 (可选) ——
    follower_axes = None if args.dry_run else connect_follower(args.sim)
    if follower_axes is None:
        print("[INFO] Follower 处于 dry-run；仅打印数据，不下发指令。")

    # —— 进入循环 ——
    loop_dt = 1.0 / args.loop_hz
    print(f"[INFO] 进入主循环 {args.loop_hz} Hz (Ctrl+C 终止)…")
    sys.stdout.write("\n")  # 预留首行，便于双行刷新

    # —— 首次校准 ——
    leader_pulses = tm.read_positions(leader, tm.LEADER_JOINT_IDS)
    leader_angles_init = tm.pulse_to_angle(leader_pulses, tm.LEADER_JOINT_IDS)
    follower_angles_init = tm.calculate_follower_angles(leader_angles_init)
    follower_angles_init = apply_manual_adjustments(follower_angles_init)
    init_err = calc_initial_error_deg(follower_angles_init, FOLLOWER_HOME_ANGLES)
    is_active = init_err <= args.safety_deg

    if is_active:
        print(f"[INFO] 安全校验通过 (最大偏差 {init_err:.1f}° ≤ {args.safety_deg}°)。同步已激活。")
    else:
        print(
            f"[WARN] 初始偏差 {init_err:.1f}° 大于阈值 {args.safety_deg}°，同步被锁定。"\
            " 仅监视，不发送指令。\n    按 Ctrl+C 退出后手动校准位置，再重启脚本。"
        )

    try:
        while True:
            t0 = time.time()

            # —— Leader → angle ——
            pulses: List[int] = tm.read_positions(leader, tm.LEADER_JOINT_IDS)
            leader_angles = tm.pulse_to_angle(pulses, tm.LEADER_JOINT_IDS)

            # —— Mapping ——
            follower_angles = tm.calculate_follower_angles(leader_angles)
            follower_angles = apply_manual_adjustments(follower_angles)

            # —— 角度 → 计数 ——
            follower_counts: Dict[int, int] = {}
            for fid, f_ang in follower_angles.items():
                follower_counts[fid] = tm.angle_to_counts(f_ang, fid)

            # —— 下发指令 (可选) ——
            if is_active and follower_axes is not None:
                # 捕获模拟器可能打印的冗余信息
                with contextlib.redirect_stdout(io.StringIO()):
                    for fid, cnt in follower_counts.items():
                        try:
                            follower_axes[fid].controller.pos_setpoint = cnt
                        except Exception:  # pylint: disable=broad-except
                            pass

            # —— 终端打印 ——
            leader_str = ", ".join(
                [f"J{i+1}:{ang:6.1f}°" for i, ang in enumerate(leader_angles)]
            )
            follower_ids_order = [1, 2, 3, 5, 6]
            follower_str = ", ".join(
                [f"J{fid}:{follower_angles.get(fid, 0):6.1f}°" for fid in follower_ids_order]
            )
            line1 = f"Leader Angles:   [ {leader_str} ]"
            line2 = f"Follower Angles: [ {follower_str} ]"

            if args.plain:
                # 普通终端或日志文件使用换行堆叠输出
                print(line1)
                print(line2)
            else:
                # 动态刷新，保持两行高度
                out = f"\x1b[2K\r{line1}\n\x1b[2K\r{line2}\x1b[1A"
                sys.stdout.write(out)
                sys.stdout.flush()

            # —— 限频 ——
            sleep_t = loop_dt - (time.time() - t0)
            if sleep_t > 0:
                time.sleep(sleep_t)

    except KeyboardInterrupt:
        sys.stdout.write("\n\n")
        print("[INFO] 用户取消，程序退出…")


if __name__ == "__main__":
    main()

