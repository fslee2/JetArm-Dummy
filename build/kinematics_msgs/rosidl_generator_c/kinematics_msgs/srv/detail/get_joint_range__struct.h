// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/GetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetJointRange in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetJointRange_Request
{
  uint8_t structure_needs_at_least_one_member;
} kinematics_msgs__srv__GetJointRange_Request;

// Struct for a sequence of kinematics_msgs__srv__GetJointRange_Request.
typedef struct kinematics_msgs__srv__GetJointRange_Request__Sequence
{
  kinematics_msgs__srv__GetJointRange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetJointRange_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/joints_range__struct.h"

/// Struct defined in srv/GetJointRange in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetJointRange_Response
{
  bool success;
  kinematics_msgs__msg__JointsRange data;
} kinematics_msgs__srv__GetJointRange_Response;

// Struct for a sequence of kinematics_msgs__srv__GetJointRange_Response.
typedef struct kinematics_msgs__srv__GetJointRange_Response__Sequence
{
  kinematics_msgs__srv__GetJointRange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetJointRange_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_H_
