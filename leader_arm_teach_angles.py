#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import time
import argparse
import sys
import struct
from pathlib import Path

# --- Non-blocking keyboard input setup ---
try:
    import tty
    import termios
    import select
    IS_POSIX = True
except ImportError:
    IS_POSIX = False

# --- Local Imports ---
import follower_arm_config as fac

# --- Start: SDK Import Logic ---
def _import_board():
    try:
        from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
        return Board, PacketFunction
    except ModuleNotFoundError:
        sdk_path = Path(__file__).resolve().parent / "ROS2/src"
        if sdk_path.exists() and str(sdk_path) not in sys.path:
            sys.path.insert(0, str(sdk_path))
        try:
            from driver.ros_robot_controller.ros_robot_controller.ros_robot_controller_sdk import Board, PacketFunction
            return Board, PacketFunction
        except ModuleNotFoundError as e:
            print(f"[ERROR] Failed to find the JetArm SDK in {sdk_path}")
            sys.exit(1)

Board, PacketFunction = _import_board()
# --- End: SDK Import Logic ---

LEADER_JOINT_MAP = {
    1: [0, 1000, 500, -120, 120, 0],
    2: [0, 1000, 500, 30, -210, -90],
    3: [0, 1000, 500, 120, -120, 0],
    4: [0, 1000, 500, 30, -210, -90],
    5: [0, 1000, 500, -120, 120, 0],
}

# Restore the original, working unload_servos function
def unload_servos(board, servo_ids):
    """卸载力矩 (掉电), 使用您代码中已验证有效的指令."""
    sys.stdout.write("\r[INFO] Disengaging servos (compliant mode)... ")
    sys.stdout.flush()
    CMD_LOAD_OR_UNLOAD = 31
    for sid in servo_ids:
        try:
            payload = struct.pack('<B', 0) # Payload 0 to UNLOAD torque
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as e:
            print(f"\n[WARN] Failed to unload torque for servo {sid}: {e}")
        time.sleep(0.02)
    print("Done.")

# Implement the logical inverse for loading servos
def load_servos(board, servo_ids):
    """加载力矩 (上电), 基于有效的 unload_servos 推断."""
    sys.stdout.write("\r[INFO] Engaging servos (applying torque)... ")
    sys.stdout.flush()
    CMD_LOAD_OR_UNLOAD = 31
    for sid in servo_ids:
        try:
            payload = struct.pack('<B', 1) # Payload 1 to LOAD torque
            board.buf_write(PacketFunction.PACKET_FUNC_BUS_SERVO, [CMD_LOAD_OR_UNLOAD, sid] + list(payload))
        except Exception as e:
            print(f"\n[WARN] Failed to load torque for servo {sid}: {e}")
        time.sleep(0.02)
    print("Done.")

def read_positions(board, servo_ids):
    positions = []
    for sid in servo_ids:
        try:
            pos_tuple = board.bus_servo_read_position(sid)
            positions.append(pos_tuple[0] if pos_tuple else 0)
        except Exception:
            positions.append(0)
    return positions

def pulse_to_angle(pulses, servo_ids):
    angles = []
    for p, sid in zip(pulses, servo_ids):
        m = LEADER_JOINT_MAP[sid]
        pulse_range, angle_range = m[1] - m[0], m[4] - m[3]
        angle = m[3] + ((p - m[0]) / pulse_range) * angle_range
        angles.append(angle)
    return angles

def angle_to_pulse(angle, servo_id):
    m = LEADER_JOINT_MAP[servo_id]
    pulse_range, angle_range = m[1] - m[0], m[4] - m[3]
    pulse = m[0] + ((angle - m[3]) / angle_range) * pulse_range
    return max(0, min(1000, int(pulse)))

def write_angles_to_leader(board, leader_angles_dict, move_duration_s=1.5):
    servo_ids = list(leader_angles_dict.keys())
    load_servos(board, servo_ids)
    time.sleep(0.5)

    positions_to_set = []
    for sid, angle in leader_angles_dict.items():
        pulse = angle_to_pulse(angle, sid)
        positions_to_set.append([sid, pulse])
    
    sys.stdout.write(f"\r[INFO] Moving to target position over {move_duration_s}s... ")
    sys.stdout.flush()
    try:
        board.bus_servo_set_position(move_duration_s, positions_to_set)
    except Exception as e:
        print(f"\n[ERROR] Failed to send move command: {e}")
    
    time.sleep(move_duration_s)
    print("Done.")

def get_leader_angles_for_follower_pose(follower_pose_angles):
    leader_target_angles = {}
    for leader_id in range(1, 6):
        follower_id = fac.LEADER_TO_FOLLOWER_MAP.get(leader_id)
        if follower_id and follower_id in follower_pose_angles:
            leader_target_angles[leader_id] = follower_pose_angles[follower_id]
    return leader_target_angles

def get_key():
    if not IS_POSIX: return None
    if select.select([sys.stdin], [], [], 0) == ([sys.stdin], [], []):
        return sys.stdin.read(1)
    return None

def print_controls():
    print("\n[CONTROLS] Press: [h] Home Pose | [r] Rest Pose | [c] Compliant/Teach Mode | [q] Quit")

def main():
    parser = argparse.ArgumentParser(description="主-从臂映射与控制脚本")
    parser.add_argument("--device", default="/dev/ttyUSB2", help="串口设备")
    parser.add_argument("--ids", type=int, nargs="+", default=[1, 2, 3, 4, 5], help="舵机ID列表")
    args = parser.parse_args()

    if IS_POSIX: old_settings = termios.tcgetattr(sys.stdin); tty.setcbreak(sys.stdin.fileno())

    board = Board(device=args.device)
    board.enable_reception(True)
    print(f"[INFO] Connected to {args.device}")

    mode = 'teach'
    unload_servos(board, args.ids)
    print_controls()

    try:
        while True:
            key = get_key()
            if key == 'q': print("\n[INFO] Quitting..."); break
            
            if key in ['h', 'r', 'c']:
                if key == 'c':
                    unload_servos(board, args.ids)
                    mode = 'teach'
                    print_controls()
                else:
                    mode = 'command'
                    pose_name = 'home' if key == 'h' else 'rest'
                    print(f"\n[ACTION] Moving to {pose_name.capitalize()} Pose...")
                    leader_angles = get_leader_angles_for_follower_pose(fac.FOLLOWER_PRESET_POSES[pose_name])
                    write_angles_to_leader(board, leader_angles)
                    print("\n[INFO] Move complete. Press 'c' to return to teach mode.")

            if mode == 'teach':
                pulse_positions = read_positions(board, args.ids)
                angle_positions = pulse_to_angle(pulse_positions, args.ids)
                
                follower_counts = {}
                for angle, lid in zip(angle_positions, args.ids):
                    fid = fac.LEADER_TO_FOLLOWER_MAP.get(lid)
                    if fid: follower_counts[fid] = fac.angle_to_counts(angle, fid)

                count_str = ", ".join([f"J{fid}: {cnt:7d}" for fid, cnt in sorted(follower_counts.items())])
                sys.stdout.write(f"\rFollower Counts: [ {count_str} ] ")
                sys.stdout.flush()
                time.sleep(0.05)
            else:
                time.sleep(0.1)
            
    except KeyboardInterrupt: print(f"\n[INFO] Stopped by user.")
    finally: 
        if IS_POSIX: termios.tcsetattr(sys.stdin, termios.TCSADRAIN, old_settings)

if __name__ == "__main__":
    main()
