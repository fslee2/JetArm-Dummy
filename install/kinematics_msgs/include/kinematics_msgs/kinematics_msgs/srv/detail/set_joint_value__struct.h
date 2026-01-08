// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/SetJointValue.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetJointValue in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetJointValue_Request
{
  rosidl_runtime_c__float__Sequence joint_value;
} kinematics_msgs__srv__SetJointValue_Request;

// Struct for a sequence of kinematics_msgs__srv__SetJointValue_Request.
typedef struct kinematics_msgs__srv__SetJointValue_Request__Sequence
{
  kinematics_msgs__srv__SetJointValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetJointValue_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetJointValue in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetJointValue_Response
{
  bool success;
  bool solution;
  geometry_msgs__msg__Pose pose;
} kinematics_msgs__srv__SetJointValue_Response;

// Struct for a sequence of kinematics_msgs__srv__SetJointValue_Response.
typedef struct kinematics_msgs__srv__SetJointValue_Response__Sequence
{
  kinematics_msgs__srv__SetJointValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetJointValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_
