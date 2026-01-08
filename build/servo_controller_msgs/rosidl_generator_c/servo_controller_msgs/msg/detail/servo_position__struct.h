// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_controller_msgs:msg/ServoPosition.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__STRUCT_H_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoPosition in the package servo_controller_msgs.
typedef struct servo_controller_msgs__msg__ServoPosition
{
  uint16_t id;
  float position;
} servo_controller_msgs__msg__ServoPosition;

// Struct for a sequence of servo_controller_msgs__msg__ServoPosition.
typedef struct servo_controller_msgs__msg__ServoPosition__Sequence
{
  servo_controller_msgs__msg__ServoPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_controller_msgs__msg__ServoPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__STRUCT_H_
