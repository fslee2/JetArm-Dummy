// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_controller_msgs:msg/ServosPosition.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_H_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_unit'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "servo_controller_msgs/msg/detail/servo_position__struct.h"

/// Struct defined in msg/ServosPosition in the package servo_controller_msgs.
typedef struct servo_controller_msgs__msg__ServosPosition
{
  double duration;
  rosidl_runtime_c__String position_unit;
  servo_controller_msgs__msg__ServoPosition__Sequence position;
} servo_controller_msgs__msg__ServosPosition;

// Struct for a sequence of servo_controller_msgs__msg__ServosPosition.
typedef struct servo_controller_msgs__msg__ServosPosition__Sequence
{
  servo_controller_msgs__msg__ServosPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_controller_msgs__msg__ServosPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_H_
