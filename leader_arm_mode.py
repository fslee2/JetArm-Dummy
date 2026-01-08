#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import time, struct, argparse, csv, sys
from pathlib import Path

# 优先复用仓库里已验证可用的 Board SDK（standalone_arm_reader.py 同款）
def _import_board():
    try:
        from ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore
        return Board
    except ModuleNotFoundError:
        # 兼容：未 source install/setup.bash 时，从工作区路径导入
        root = Path(__file__).resolve().parent
        pyver = f"python{sys.version_info.major}.{sys.version_info.minor}"
        candidates = [
            root / "install/ros_robot_controller/lib" / pyver / "site-packages",
            root / "ROS2/src/driver/ros_robot_controller",
            root / "ROS2/src",
            root / "ROS2",
        ]
        for p in candidates:
            if p.exists():
                s = str(p)
                if s not in sys.path:
                    sys.path.insert(0, s)
        from ros_robot_controller.ros_robot_controller_sdk import Board  # type: ignore
        return Board

CRC8_TABLE = [
    0,94,188,226,97,63,221,131,194,156,126,32,163,253,31,65,
    157,195,33,127,252,162,64,30,95,1,227,189,62,96,130,220,
    35,125,159,193,66,28,254,160,225,191,93,3,128,222,60,98,
    190,224,2,92,223,129,99,61,124,34,192,158,29,67,161,255,
    70,24,250,164,39,121,155,197,132,218,56,102,229,187,89,7,
    219,133,103,57,186,228,6,88,25,71,165,251,120,38,196,154,
    101,59,217,135,4,90,184,230,167,249,27,69,198,152,122,36,
    248,166,68,26,153,199,37,123,58,100,134,216,91,5,231,185,
    140,210,48,110,237,179,81,15,78,16,242,172,47,113,147,205,
    17,79,173,243,112,46,204,146,211,141,111,49,178,236,14,80,
    175,241,19,77,206,144,114,44,109,51,209,143,12,82,176,238,
    50,108,142,208,83,13,239,177,240,174,76,18,145,207,45,115,
    202,148,118,40,171,245,23,73,8,86,180,234,105,55,213,139,
    87,9,235,181,54,104,138,212,149,203,41,119,244,170,72,22,
    233,183,85,11,136,214,52,106,43,117,151,201,74,20,246,168,
    116,42,200,150,21,75,169,247,182,232,10,84,215,137,107,53
]

def crc8(data: bytes) -> int:
    c = 0
    for b in data:
        c = CRC8_TABLE[c ^ b]
    return c & 0xFF

def build_packet(func: int, payload: bytes) -> bytes:
    buf = bytearray([0xAA, 0x55, func, len(payload)])
    buf += payload
    buf.append(crc8(buf[2:]))
    return bytes(buf)

def torque_off(board, servo_ids, retry: int = 3):
    """
    关闭扭矩，让关节可手动拖动。
    retry: 若读取 torque_state 仍为 1，则重试几轮。
    """
    last_states = None
    for _ in range(max(1, int(retry))):
        for sid in servo_ids:
            try:
                board.bus_servo_enable_torque(sid, 0)
            except Exception as exc:
                print(f"[WARN] torque off id={sid} failed: {exc}")
            time.sleep(0.02)
        time.sleep(0.05)
        last_states = [read_torque_state(board, sid) for sid in servo_ids]
        # 0 表示已关闭，-1 表示读取失败（不阻塞通过）
        ok = True
        for s in last_states:
            if s not in (0, -1):
                ok = False
                break
        if ok:
            return last_states
    return last_states

def read_torque_state(board, sid) -> int:
    try:
        state = board.bus_servo_read_torque_state(sid)
        if state is None or len(state) == 0:
            return -1
        return int(state[-1])
    except Exception:
        return -1

def read_position(board, sid):
    try:
        state = board.bus_servo_read_position(sid)
        if state is None or len(state) == 0:
            return None
        return int(state[-1])
    except Exception:
        return None

def pulse2angle_deg(pulses):
    # 依据 transform.py 中映射表，可按需要调整
    joint_map = [
        [0,1000,500,-120,120,0],
        [0,1000,500,30,-210,-90],
        [0,1000,500,120,-120,0],
        [0,1000,500,30,-210,-90],
        [0,1000,500,-120,120,0],
    ]
    angs = []
    for p, m in zip(pulses, joint_map):
        ang = ((p - m[2]) / (m[1]-m[0])) * (m[4]-m[3]) + m[5]
        angs.append(ang)
    return angs

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--device", default="/dev/ttyUSB0")
    ap.add_argument("--baud", type=int, default=1_000_000)
    ap.add_argument("--hz", type=float, default=100.0)
    ap.add_argument("--ids", type=int, nargs="+", default=[1,2,3,4,5])
    ap.add_argument("--csv", default=None)
    ap.add_argument("--torque-test", action="store_true", help="仅测试扭矩开/关命令与 torque_state 反馈，然后退出")
    ap.add_argument("--keep-torque-off", type=float, default=0.5, help="循环过程中每隔多少秒重复发送 torque off（防止被自动重新使能）。0 表示不重复。")
    args = ap.parse_args()

    Board = _import_board()
    print(f"[DEBUG] 正在初始化 Board SDK: device={args.device} baud={args.baud} ...")
    try:
        board = Board(device=args.device, baudrate=args.baud, timeout=0.1)
        board.enable_reception(True)
        print("[DEBUG] Board 初始化成功，接收线程已开启")
    except Exception as e:
        print(f"[ERROR] Board 初始化失败: {e}")
        sys.exit(1)
    
    period = 1.0 / args.hz if args.hz > 0 else 0.02

    if args.torque_test:
        before = [read_torque_state(board, sid) for sid in args.ids]
        print(f"[TEST] torque_state(before)={before}")
        print("[TEST] send torque ON(enable=1) ...")
        for sid in args.ids:
            try:
                board.bus_servo_enable_torque(sid, 1)
            except Exception as exc:
                print(f"[WARN] torque on id={sid} failed: {exc}")
            time.sleep(0.02)
        time.sleep(0.2)
        on_state = [read_torque_state(board, sid) for sid in args.ids]
        print(f"[TEST] torque_state(after ON)={on_state}")
        print("[TEST] send torque OFF(enable=0) ...")
        off_state = torque_off(board, args.ids, retry=3)
        print(f"[TEST] torque_state(after OFF)={off_state}")
        return

    # Step 1: Torque-off
    print(f"[DEBUG] 正在发送 torque off 命令...")
    torque_states = torque_off(board, args.ids, retry=5)
    # 经过实测：torque_state=1 表示已卸载(扭矩关/可拖动)，torque_state=0 表示已上电(扭矩开/抱死)
    print(f"[INFO] torque off for {args.ids}, torque_state={torque_states} (1=off/free,0=on/locked,-1=unknown)")
    print("[INFO] start teaching... 若 torque_state 为 1，你应该可以手动拖动机械臂。")

    writer = None
    if args.csv:
        f = open(args.csv, "w", newline="")
        writer = csv.writer(f)
        writer.writerow(["t"] + [f"pulse_{i}" for i in args.ids] + [f"deg_{i}" for i in args.ids])

    try:
        last_keep_off = 0.0
        while True:
            t0 = time.time()
            if args.keep_torque_off and (t0 - last_keep_off) >= float(args.keep_torque_off):
                torque_off(board, args.ids, retry=1)
                last_keep_off = t0
            pulses = []
            for sid in args.ids:
                pos = read_position(board, sid)
                pulses.append(pos if pos is not None else 0)
            ang_deg = pulse2angle_deg(pulses)
            print({"t": round(t0,3), "pulse": pulses, "deg": [round(a,2) for a in ang_deg]})
            if writer:
                writer.writerow([f"{t0:.6f}", *pulses, *[f"{a:.4f}" for a in ang_deg]])
            dt = time.time() - t0
            if dt < period:
                time.sleep(period - dt)
    except KeyboardInterrupt:
        print("\n[INFO] Ctrl+C received, keep torque-off by default; close serial.")
    finally:
        # 再次 torque-off，尽量保持可拖动
        try:
            torque_off(board, args.ids, retry=2)
        except Exception:
            pass
        try:
            if writer:
                f.close()
        except Exception:
            pass


if __name__ == "__main__":
    main()