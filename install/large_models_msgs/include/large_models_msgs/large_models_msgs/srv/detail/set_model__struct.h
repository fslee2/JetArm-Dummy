// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from large_models_msgs:srv/SetModel.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_H_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'platform'
// Member 'model'
// Member 'model_type'
// Member 'api_key'
// Member 'base_url'
// Member 'app_id'
// Member 'conversation_id'
// Member 'token'
// Member 'app_key'
// Member 'secret_key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetModel in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetModel_Request
{
  rosidl_runtime_c__String platform;
  rosidl_runtime_c__String model;
  rosidl_runtime_c__String model_type;
  rosidl_runtime_c__String api_key;
  rosidl_runtime_c__String base_url;
  rosidl_runtime_c__String app_id;
  rosidl_runtime_c__String conversation_id;
  rosidl_runtime_c__String token;
  rosidl_runtime_c__String app_key;
  rosidl_runtime_c__String secret_key;
} large_models_msgs__srv__SetModel_Request;

// Struct for a sequence of large_models_msgs__srv__SetModel_Request.
typedef struct large_models_msgs__srv__SetModel_Request__Sequence
{
  large_models_msgs__srv__SetModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetModel_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetModel in the package large_models_msgs.
typedef struct large_models_msgs__srv__SetModel_Response
{
  bool success;
  rosidl_runtime_c__String message;
} large_models_msgs__srv__SetModel_Response;

// Struct for a sequence of large_models_msgs__srv__SetModel_Response.
typedef struct large_models_msgs__srv__SetModel_Response__Sequence
{
  large_models_msgs__srv__SetModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} large_models_msgs__srv__SetModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_H_
