// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/SetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/joints_range__struct.h"

/// Struct defined in srv/SetJointRange in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetJointRange_Request
{
  kinematics_msgs__msg__JointsRange data;
} kinematics_msgs__srv__SetJointRange_Request;

// Struct for a sequence of kinematics_msgs__srv__SetJointRange_Request.
typedef struct kinematics_msgs__srv__SetJointRange_Request__Sequence
{
  kinematics_msgs__srv__SetJointRange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetJointRange_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointRange in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetJointRange_Response
{
  bool success;
  rosidl_runtime_c__String message;
} kinematics_msgs__srv__SetJointRange_Response;

// Struct for a sequence of kinematics_msgs__srv__SetJointRange_Response.
typedef struct kinematics_msgs__srv__SetJointRange_Response__Sequence
{
  kinematics_msgs__srv__SetJointRange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetJointRange_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_H_
