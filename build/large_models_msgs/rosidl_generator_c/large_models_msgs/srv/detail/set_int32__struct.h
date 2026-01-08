// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from large_models_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetInt32 in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetInt32_Request
{
  int32_t data;
} large_models_msgs__srv__SetInt32_Request;

// Struct for a sequence of large_models_msgs__srv__SetInt32_Request.
typedef struct large_models_msgs__srv__SetInt32_Request__Sequence
{
  large_models_msgs__srv__SetInt32_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetInt32_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetInt32 in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetInt32_Response
{
  bool success;
  rosidl_runtime_c__String message;
} large_models_msgs__srv__SetInt32_Response;

// Struct for a sequence of large_models_msgs__srv__SetInt32_Response.
typedef struct large_models_msgs__srv__SetInt32_Response__Sequence
{
  large_models_msgs__srv__SetInt32_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetInt32_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
