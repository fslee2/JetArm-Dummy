#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
独立从臂读取脚本（脱离 ROS 2）

功能：
- 直接使用 Board 串口 SDK 通过 /dev/ttyUSB0 读取总线舵机位置
- 将脉宽映射为关节角度（rad / deg），默认 5 轴 + 末端 ID=10
- 默认 100 Hz 轮询，可选将数据实时打印或写入 CSV

使用示例：
    python3 standalone_arm_reader.py --device /dev/ttyUSB0 --hz 100 --csv arm_log.csv

依赖：
- ros_robot_controller.ros_robot_controller_sdk.Board
- kinematics.kinematics.transform.pulse2angle
"""

from __future__ import annotations

import argparse
import csv
import sys
import time
from pathlib import Path
from typing import Iterable, List, Sequence, Tuple

# 将工作区 src 加入 sys.path，保证可导入已存在的 SDK 与 kinematics
ROOT = Path(__file__).resolve().parent
SRC_DIR = ROOT / "src"
if SRC_DIR.exists():
    sys.path.insert(0, str(SRC_DIR))

from ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore

# 尝试多路径导入 transform，兼容源码/安装位置
if True:  # 便于折叠
    import importlib

    PYVER = f"python{sys.version_info.major}.{sys.version_info.minor}"
    KIN_PATHS = [
        ROOT / "src",
        ROOT / "src/driver",
        ROOT / "src/driver/kinematics",
        ROOT / "install/kinematics/lib" / PYVER / "site-packages",
        ROOT.parent / "install/kinematics/lib" / PYVER / "site-packages",
    ]
    for p in KIN_PATHS:
        if p.exists():
            s = str(p)
            if s not in sys.path:
                sys.path.insert(0, s)
    transform = None
    try:
        from kinematics.kinematics import transform as _tf  # type: ignore
        transform = _tf
    except ModuleNotFoundError:
        try:
            from kinematics import transform as _tf  # type: ignore
            transform = _tf
        except ModuleNotFoundError as exc:
            raise ModuleNotFoundError(
                "无法导入 kinematics.transform，请确认已 colcon build 并 source install/setup.bash，"
                "或检查路径是否包含 install/kinematics/lib/pythonX.Y/site-packages"
            ) from exc


SERVO_IDS = [1, 2, 3, 4, 5]   # 关节 ID
EXTRA_IDS = [10]              # 末端夹爪 ID，可按需扩展
ALL_IDS = SERVO_IDS + EXTRA_IDS


def torque_off_all(board: Board, ids: Sequence[int]) -> None:
    """关闭指定 ID 的扭矩，进入从臂/透明模式。"""
    for sid in ids:
        try:
            board.bus_servo_enable_torque(sid, 0)
            time.sleep(0.02)
        except Exception as exc:  # pragma: no cover - 仅运行时日志
            print(f"[WARN] torque off id={sid} failed: {exc}")


def read_joint_pulse(board: Board, ids: Sequence[int]) -> List[int]:
    """按顺序读取各关节当前位置（脉宽/编码值）。"""
    pulses: List[int] = []
    for sid in ids:
        try:
            state = board.bus_servo_read_position(sid)
            # SDK 返回 info 列表，read_position 对应 [position]
            if state is None or len(state) == 0:
                pulses.append(0)
            else:
                pulses.append(int(state[-1]))
        except Exception as exc:  # pragma: no cover
            print(f"[WARN] read position id={sid} failed: {exc}")
            pulses.append(0)
    return pulses


def read_torque_state(board: Board, ids: Sequence[int]) -> List[int]:
    """读取扭矩状态（是否上电/抱死）。无真实力矩值，仅状态位。"""
    states: List[int] = []
    for sid in ids:
        try:
            state = board.bus_servo_read_torque_state(sid)
            if state is None or len(state) == 0:
                states.append(-1)  # -1 表示未知/读取失败
            else:
                states.append(int(state[-1]))
        except Exception as exc:  # pragma: no cover
            print(f"[WARN] read torque state id={sid} failed: {exc}")
            states.append(-1)
    return states


def angles_from_pulse(pulses: Sequence[int]) -> Tuple[float, ...]:
    """将 5 关节脉宽映射为弧度角。"""
    if len(pulses) < len(SERVO_IDS):
        raise ValueError(f"pulse length {len(pulses)} < expected {len(SERVO_IDS)}")
    return transform.pulse2angle(pulses)


def writer(csv_path: Path, header: Iterable[str]):
    """CSV 写入器生成器。"""
    csv_path.parent.mkdir(parents=True, exist_ok=True)
    f = csv_path.open("w", newline="")
    w = csv.writer(f)
    w.writerow(list(header))

    def _write_row(row: Iterable):
        w.writerow(list(row))
        f.flush()

    return _write_row, f


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Standalone arm state reader (bus servo)")
    parser.add_argument("--device", default="/dev/ttyUSB0", help="串口设备节点，例如 /dev/ttyUSB0")
    parser.add_argument("--baudrate", type=int, default=1_000_000, help="串口波特率，默认 1Mbps")
    parser.add_argument("--hz", type=float, default=100.0, help="目标轮询频率 Hz")
    parser.add_argument("--csv", type=Path, default=None, help="可选：输出 CSV 文件路径")
    parser.add_argument("--ids", type=int, nargs="+", default=SERVO_IDS, help="参与读取的关节 ID 列表")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    period = 1.0 / args.hz if args.hz > 0 else 0.01

    print(f"[INFO] init Board on {args.device} baud={args.baudrate}")
    board = Board(device=args.device, baudrate=args.baudrate, timeout=0.1)
    board.enable_reception(True)
    torque_off_all(board, ALL_IDS)
    print("[INFO] torque-off done, you can drag the arm by hand.")

    csv_writer = None
    csv_file = None
    if args.csv:
        csv_writer, csv_file = writer(
            args.csv,
            header=[
                "t",
                *[f"pulse_{sid}" for sid in args.ids],
                *[f"angle_rad_{sid}" for sid in args.ids],
                *[f"torque_state_{sid}" for sid in args.ids],
            ],
        )
        print(f"[INFO] logging to {args.csv}")

    try:
        while True:
            t0 = time.time()
            pulses = read_joint_pulse(board, args.ids)
            angles = angles_from_pulse(pulses)
            torque_state = read_torque_state(board, args.ids)

            angles_deg = [a * 180.0 / 3.141592653589793 for a in angles]
            print(
                f"t={t0:.3f}s "
                f"pulse={pulses} "
                f"angle_rad={[round(a,3) for a in angles]} "
                f"angle_deg={[round(a,1) for a in angles_deg]} "
                f"torque_state={torque_state}"
            )

            if csv_writer:
                csv_writer(
                    [
                        f"{t0:.6f}",
                        *pulses,
                        *[f"{a:.6f}" for a in angles],
                        *torque_state,
                    ]
                )

            dt = time.time() - t0
            if dt < period:
                time.sleep(period - dt)
    except KeyboardInterrupt:
        print("\n[INFO] Interrupted, torque-off all and exit...")
        torque_off_all(board, ALL_IDS)
        time.sleep(0.1)
    finally:
        if csv_file:
            csv_file.close()


if __name__ == "__main__":
    main()

