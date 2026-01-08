// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'pitch_range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetRobotPose in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetRobotPose_Request
{
  rosidl_runtime_c__double__Sequence position;
  double pitch;
  rosidl_runtime_c__double__Sequence pitch_range;
  double resolution;
  double duration;
} kinematics_msgs__srv__SetRobotPose_Request;

// Struct for a sequence of kinematics_msgs__srv__SetRobotPose_Request.
typedef struct kinematics_msgs__srv__SetRobotPose_Request__Sequence
{
  kinematics_msgs__srv__SetRobotPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetRobotPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pulse'
// Member 'current_pulse'
// Member 'rpy'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetRobotPose in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetRobotPose_Response
{
  bool success;
  rosidl_runtime_c__uint16__Sequence pulse;
  rosidl_runtime_c__uint16__Sequence current_pulse;
  rosidl_runtime_c__double__Sequence rpy;
  double min_variation;
} kinematics_msgs__srv__SetRobotPose_Response;

// Struct for a sequence of kinematics_msgs__srv__SetRobotPose_Response.
typedef struct kinematics_msgs__srv__SetRobotPose_Response__Sequence
{
  kinematics_msgs__srv__SetRobotPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetRobotPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_
