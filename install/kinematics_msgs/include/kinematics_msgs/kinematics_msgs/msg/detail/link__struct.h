// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_H_
#define KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Link in the package kinematics_msgs.
typedef struct kinematics_msgs__msg__Link
{
  double base_link;
  double link1;
  double link2;
  double link3;
  double end_effector_link;
} kinematics_msgs__msg__Link;

// Struct for a sequence of kinematics_msgs__msg__Link.
typedef struct kinematics_msgs__msg__Link__Sequence
{
  kinematics_msgs__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_H_
