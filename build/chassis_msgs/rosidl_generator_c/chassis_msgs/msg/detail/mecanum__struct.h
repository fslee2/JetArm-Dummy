// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_H_
#define CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Mecanum in the package chassis_msgs.
typedef struct chassis_msgs__msg__Mecanum
{
  float velocity;
  float direction;
  float angular_rate;
} chassis_msgs__msg__Mecanum;

// Struct for a sequence of chassis_msgs__msg__Mecanum.
typedef struct chassis_msgs__msg__Mecanum__Sequence
{
  chassis_msgs__msg__Mecanum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chassis_msgs__msg__Mecanum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_H_
