// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:msg/JointsRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint1'
// Member 'joint2'
// Member 'joint3'
// Member 'joint4'
// Member 'joint5'
#include "kinematics_msgs/msg/detail/joint_range__struct.h"

/// Struct defined in msg/JointsRange in the package kinematics_msgs.
typedef struct kinematics_msgs__msg__JointsRange
{
  kinematics_msgs__msg__JointRange joint1;
  kinematics_msgs__msg__JointRange joint2;
  kinematics_msgs__msg__JointRange joint3;
  kinematics_msgs__msg__JointRange joint4;
  kinematics_msgs__msg__JointRange joint5;
} kinematics_msgs__msg__JointsRange;

// Struct for a sequence of kinematics_msgs__msg__JointsRange.
typedef struct kinematics_msgs__msg__JointsRange__Sequence
{
  kinematics_msgs__msg__JointsRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__msg__JointsRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_
