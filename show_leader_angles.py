#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import time
import argparse
import sys
import struct
from pathlib import Path

# --- Start: SDK Import Logic ---
def _import_board():
    try:
        from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
        return Board, PacketFunction
    except ModuleNotFoundError:
        root = Path(__file__).resolve().parent
        SRC_DIR = root / "ROS2/src"
        if SRC_DIR.exists() and str(SRC_DIR) not in sys.path:
            sys.path.insert(0, str(SRC_DIR))
        try:
            from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
            return Board, PacketFunction
        except ModuleNotFoundError as e:
            print(f"[ERROR] Failed to import Board SDK. Original error: {e}")
            sys.exit(1)

Board, PacketFunction = _import_board()
# --- End: SDK Import Logic ---

# Leader arm's pulse-to-angle conversion parameters
# [pulse_min, pulse_max, pulse_center, angle_min, angle_max, angle_at_center]
LEADER_JOINT_MAP = {
    1: [0, 1000, 500, -120, 120, 0],
    2: [0, 1000, 500, 30, -210, -90],
    3: [0, 1000, 500, 120, -120, 0],
    4: [0, 1000, 500, 30, -210, -90],
    5: [0, 1000, 500, -120, 120, 0],
}

def unload_servos(board, servo_ids):
    print("[INFO] Setting servos to compliant mode...")
    CMD_LOAD_OR_UNLOAD = 31
    for sid in servo_ids:
        try:
            payload = struct.pack('<B', 0)
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as e:
            print(f"[WARN] Failed to send unload command to ID {sid}: {e}")
        time.sleep(0.01)
    print("[INFO] Servos are now in compliant (silky smooth) mode.")

def read_positions(board, servo_ids):
    positions = []
    for sid in servo_ids:
        try:
            state = board.bus_servo_read_position(sid)
            if state is not None and len(state) > 0:
                positions.append(int(state[-1]))
            else:
                positions.append(0)
        except Exception:
            positions.append(0)
    return positions

def pulse_to_angle(pulses, servo_ids):
    angles = []
    for p, sid in zip(pulses, servo_ids):
        m = LEADER_JOINT_MAP[sid]
        pulse_range = m[1] - m[0]
        angle_range = m[4] - m[3]
        angle = m[3] + ((p - m[0]) / pulse_range) * angle_range
        angles.append(angle)
    return angles

def main():
    parser = argparse.ArgumentParser(description="实时显示主臂（示教臂）的关节角度")
    parser.add_argument("--device", default="/dev/ttyUSB2", help="串口设备")
    parser.add_argument("--baud", type=int, default=1000000, help="波特率")
    parser.add_argument("--hz", type=float, default=20, help="采样与显示频率 (Hz)")
    parser.add_argument("--ids", type=int, nargs="+", default=[1, 2, 3, 4, 5], help="舵机ID列表")
    args = parser.parse_args()

    board = Board(device=args.device, baudrate=args.baud, timeout=0.1)
    board.enable_reception(True)
    print(f"[INFO] Connected to {args.device} at {args.baud} baud.")

    unload_servos(board, args.ids)

    try:
        while True:
            loop_start_time = time.time()

            pulse_positions = read_positions(board, args.ids)
            angle_positions = pulse_to_angle(pulse_positions, args.ids)

            angle_str = ", ".join([f"J{sid}: {ang:6.1f}°" for sid, ang in zip(args.ids, angle_positions)])
            sys.stdout.write(f"\rAngles: [ {angle_str} ] ")
            sys.stdout.flush()

            loop_duration = time.time() - loop_start_time
            sleep_duration = (1.0 / args.hz) - loop_duration
            if sleep_duration > 0:
                time.sleep(sleep_duration)
            
    except KeyboardInterrupt:
        print(f"\n[INFO] Stopped by user.")

if __name__ == "__main__":
    main()

