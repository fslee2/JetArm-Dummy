// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetStringBool.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data_str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringBool in the package interfaces.
typedef struct interfaces__srv__SetStringBool_Request
{
  rosidl_runtime_c__String data_str;
  bool data_bool;
} interfaces__srv__SetStringBool_Request;

// Struct for a sequence of interfaces__srv__SetStringBool_Request.
typedef struct interfaces__srv__SetStringBool_Request__Sequence
{
  interfaces__srv__SetStringBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetStringBool_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringBool in the package interfaces.
typedef struct interfaces__srv__SetStringBool_Response
{
  bool success;
  rosidl_runtime_c__String message;
} interfaces__srv__SetStringBool_Response;

// Struct for a sequence of interfaces__srv__SetStringBool_Response.
typedef struct interfaces__srv__SetStringBool_Response__Sequence
{
  interfaces__srv__SetStringBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetStringBool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_H_
