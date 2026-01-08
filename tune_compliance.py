#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import time
import argparse
import sys
from pathlib import Path

# --- Start: Logic copied from standalone_arm_reader.py ---
# This ensures the SDK is imported and initialized exactly like the working script.
ROOT = Path(__file__).resolve().parent
SRC_DIR = ROOT / "ROS2/src"
if SRC_DIR.exists() and str(SRC_DIR) not in sys.path:
    sys.path.insert(0, str(SRC_DIR))

try:
    # This specific import path is crucial
    from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board
except ModuleNotFoundError as e:
    print(f"[ERROR] Failed to import Board SDK with path: {SRC_DIR}")
    print("        Original error:", e)
    sys.exit(1)
# --- End: Logic copied from standalone_arm_reader.py ---

def read_positions(board, servo_ids):
    """Reads positions using the exact same logic as the working script."""
    positions = []
    for sid in servo_ids:
        try:
            state = board.bus_servo_read_position(sid)
            if state is None or len(state) == 0:
                positions.append(None)
            else:
                positions.append(int(state[-1]))
        except Exception as e:
            print(f"[WARN] Exception reading position for ID {sid}: {e}")
            positions.append(None)
    return positions

def main():
    parser = argparse.ArgumentParser(description="通过软件平滑来调试虚拟柔顺度")
    parser.add_argument("--device", default="/dev/ttyUSB0", help="串口设备")
    parser.add_argument("--baud", type=int, default=1000000, help="波特率")
    parser.add_argument("--hz", type=float, default=100, help="控制与显示频率 (Hz)")
    parser.add_argument("--ids", type=int, nargs="+", default=[1, 2, 3, 4, 5], help="舵机ID列表")
    parser.add_argument("--smoothing", type=float, default=0.0, help="平滑系数 (0.0 to 0.9). 0=最硬, 0.8=很软.")
    args = parser.parse_args()

    # Initialize Board exactly like the working script
    board = Board(device=args.device, baudrate=args.baud, timeout=0.1)
    board.enable_reception(True)
    print(f"[INFO] Connected to {args.device} at {args.baud} baud using verified logic.")

    smoothing_factor = max(0.0, min(0.95, args.smoothing))
    print(f"[INFO] Starting compliant control with smoothing factor: {smoothing_factor}")

    # Get initial positions
    print("[INFO] Reading initial positions...")
    target_positions = read_positions(board, args.ids)
    if any(p is None for p in target_positions):
        print("[ERROR] Failed to read initial positions from some servos. Aborting.")
        return
    print("[INFO] Initial positions read successfully.")

    try:
        print(f"\n[INFO] Displaying real-time positions. Press Ctrl+C to stop...")
        
        while True:
            loop_start_time = time.time()

            current_positions = read_positions(board, args.ids)

            for i, pos in enumerate(current_positions):
                if pos is None:
                    current_positions[i] = target_positions[i]
            
            for i in range(len(args.ids)):
                target_positions[i] = (smoothing_factor * target_positions[i]) + ((1 - smoothing_factor) * current_positions[i])

            clamped_targets = [max(0, p) for p in target_positions]
            servo_targets = [(sid, int(pos)) for sid, pos in zip(args.ids, clamped_targets)]
            board.bus_servo_set_position(0, servo_targets)

            pos_str = ", ".join([f"ID {sid}: {pos:<5}" for sid, pos in zip(args.ids, current_positions)])
            print(f"Positions: [ {pos_str} ]", end='\r')

            loop_duration = time.time() - loop_start_time
            sleep_duration = (1.0 / args.hz) - loop_duration
            if sleep_duration > 0:
                time.sleep(sleep_duration)
            
    except KeyboardInterrupt:
        print(f"\n[INFO] Stopped.")

if __name__ == "__main__":
    main()
