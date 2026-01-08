// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from large_models_msgs:srv/SetBox.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_H_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'box'
// Member 'offset'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBox in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetBox_Request
{
  rosidl_runtime_c__int32__Sequence box;
  rosidl_runtime_c__double__Sequence offset;
  rosidl_runtime_c__String label;
} large_models_msgs__srv__SetBox_Request;

// Struct for a sequence of large_models_msgs__srv__SetBox_Request.
typedef struct large_models_msgs__srv__SetBox_Request__Sequence
{
  large_models_msgs__srv__SetBox_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetBox_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBox in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetBox_Response
{
  bool success;
  rosidl_runtime_c__String message;
} large_models_msgs__srv__SetBox_Response;

// Struct for a sequence of large_models_msgs__srv__SetBox_Response.
typedef struct large_models_msgs__srv__SetBox_Response__Sequence
{
  large_models_msgs__srv__SetBox_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetBox_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_H_
