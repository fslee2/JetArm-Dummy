// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_H_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_H_

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
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AgentResult in the package large_models_msgs.
typedef struct large_models_msgs__msg__AgentResult
{
  rosidl_runtime_c__String__Sequence action;
  rosidl_runtime_c__String response;
} large_models_msgs__msg__AgentResult;

// Struct for a sequence of large_models_msgs__msg__AgentResult.
typedef struct large_models_msgs__msg__AgentResult__Sequence
{
  large_models_msgs__msg__AgentResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__msg__AgentResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_H_
