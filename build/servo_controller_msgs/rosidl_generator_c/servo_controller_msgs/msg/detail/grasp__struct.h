// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Grasp in the package servo_controller_msgs.
typedef struct servo_controller_msgs__msg__Grasp
{
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__double__Sequence position;
  uint16_t pitch;
  double angle;
  uint16_t gripper;
  uint16_t grasp_posture;
  uint16_t pre_grasp_posture;
} servo_controller_msgs__msg__Grasp;

// Struct for a sequence of servo_controller_msgs__msg__Grasp.
typedef struct servo_controller_msgs__msg__Grasp__Sequence
{
  servo_controller_msgs__msg__Grasp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_controller_msgs__msg__Grasp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
