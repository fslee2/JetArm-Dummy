# -*- coding: utf-8 -*-

"""
Configuration and mapping logic for the follower arm.
"""

# ==============================================================================
# === FOLLOWER ARM PARAMETERS
# ==============================================================================

# Parameters for the follower arm (gear_ratio, cpr)
# gear_ratio is from dummy_robot.cpp, cpr is a placeholder (e.g., 8192)
# This dictionary defines the physical properties of the follower arm's joints.
FOLLOWER_ARM_PARAMS = {
    1: {'gear_ratio': 50, 'cpr': 8192},
    2: {'gear_ratio': 30, 'cpr': 8192},
    3: {'gear_ratio': 30, 'cpr': 8192},
    4: {'gear_ratio': 24, 'cpr': 8192}, # J4 exists in params but is skipped by the map
    5: {'gear_ratio': 30, 'cpr': 8192},
    6: {'gear_ratio': 50, 'cpr': 8192},
}

# ==============================================================================
# === LEADER-FOLLOWER MAPPING
# ==============================================================================

# Map leader arm joint IDs to follower arm joint IDs
# This defines the control relationship, skipping follower J4.
LEADER_TO_FOLLOWER_MAP = {
    1: 1,  # Leader J1 -> Follower J1
    2: 2,  # Leader J2 -> Follower J2
    3: 3,  # Leader J3 -> Follower J3
    4: 5,  # Leader J4 -> Follower J5
    5: 6,  # Leader J5 -> Follower J6
}

# Create an inverse map to find which leader joint controls a follower joint
FOLLOWER_TO_LEADER_MAP = {v: k for k, v in LEADER_TO_FOLLOWER_MAP.items()}

# ==============================================================================
# === FOLLOWER ARM PRESET POSITIONS (in degrees)
# ==============================================================================

# Extracted from the follower arm's firmware (dummy_robot.h and .cpp)
# These are the target angles for the FOLLOWER arm.
FOLLOWER_PRESET_POSES = {
    'rest': {1: 0,   2: -73, 3: 180, 4: 0, 5: 0,   6: 0},
        'home': {1: 0,   2: -90,  3: 0,   4: 0, 5: 0,   6: 0},
}

# ==============================================================================
# === CONVERSION LOGIC
# ==============================================================================

def angle_to_counts(angle, follower_joint_id):
    """Converts a single angle to an encoder count for a specific follower joint."""
    if follower_joint_id not in FOLLOWER_ARM_PARAMS:
        return 0
    
    params = FOLLOWER_ARM_PARAMS[follower_joint_id]
    gear_ratio = params['gear_ratio']
    cpr = params['cpr']
    
    # The core mapping formula
    count = (angle / 360.0) * cpr * gear_ratio
    return int(count)

def angles_to_counts_dict(angles_dict):
    """Converts a dictionary of follower angles to a dictionary of follower counts."""
    counts_dict = {}
    for joint_id, angle in angles_dict.items():
        counts_dict[joint_id] = angle_to_counts(angle, joint_id)
    return counts_dict

# Convert the preset poses from angles to counts for direct use
FOLLOWER_PRESET_COUNTS = {
    'rest': angles_to_counts_dict(FOLLOWER_PRESET_POSES['rest']),
    'home': angles_to_counts_dict(FOLLOWER_PRESET_POSES['home']),
}

