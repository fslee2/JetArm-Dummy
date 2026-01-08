// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__STRUCT_H_
#define LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'object_name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Transport in the package large_models_msgs.
typedef struct large_models_msgs__msg__Transport
{
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String object_name;
  rosidl_runtime_c__float__Sequence position;
} large_models_msgs__msg__Transport;

// Struct for a sequence of large_models_msgs__msg__Transport.
typedef struct large_models_msgs__msg__Transport__Sequence
{
  large_models_msgs__msg__Transport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__msg__Transport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__STRUCT_H_
