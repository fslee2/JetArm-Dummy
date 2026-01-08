// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/GetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotPose in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetRobotPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} kinematics_msgs__srv__GetRobotPose_Request;

// Struct for a sequence of kinematics_msgs__srv__GetRobotPose_Request.
typedef struct kinematics_msgs__srv__GetRobotPose_Request__Sequence
{
  kinematics_msgs__srv__GetRobotPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetRobotPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetRobotPose in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetRobotPose_Response
{
  bool success;
  bool solution;
  geometry_msgs__msg__Pose pose;
} kinematics_msgs__srv__GetRobotPose_Response;

// Struct for a sequence of kinematics_msgs__srv__GetRobotPose_Response.
typedef struct kinematics_msgs__srv__GetRobotPose_Response__Sequence
{
  kinematics_msgs__srv__GetRobotPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetRobotPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__STRUCT_H_
