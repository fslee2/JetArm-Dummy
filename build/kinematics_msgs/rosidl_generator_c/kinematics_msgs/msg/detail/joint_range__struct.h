// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:msg/JointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointRange in the package kinematics_msgs.
typedef struct kinematics_msgs__msg__JointRange
{
  double min;
  double max;
} kinematics_msgs__msg__JointRange;

// Struct for a sequence of kinematics_msgs__msg__JointRange.
typedef struct kinematics_msgs__msg__JointRange__Sequence
{
  kinematics_msgs__msg__JointRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__msg__JointRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_
