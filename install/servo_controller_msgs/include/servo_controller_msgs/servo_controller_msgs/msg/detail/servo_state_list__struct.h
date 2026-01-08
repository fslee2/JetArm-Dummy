// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_controller_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'servo_state'
#include "servo_controller_msgs/msg/detail/servo_state__struct.h"

/// Struct defined in msg/ServoStateList in the package servo_controller_msgs.
typedef struct servo_controller_msgs__msg__ServoStateList
{
  std_msgs__msg__Header header;
  servo_controller_msgs__msg__ServoState__Sequence servo_state;
} servo_controller_msgs__msg__ServoStateList;

// Struct for a sequence of servo_controller_msgs__msg__ServoStateList.
typedef struct servo_controller_msgs__msg__ServoStateList__Sequence
{
  servo_controller_msgs__msg__ServoStateList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_controller_msgs__msg__ServoStateList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_
