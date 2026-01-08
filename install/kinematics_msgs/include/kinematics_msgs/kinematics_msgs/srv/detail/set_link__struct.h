// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/SetLink.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_LINK__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/link__struct.h"

/// Struct defined in srv/SetLink in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetLink_Request
{
  kinematics_msgs__msg__Link data;
} kinematics_msgs__srv__SetLink_Request;

// Struct for a sequence of kinematics_msgs__srv__SetLink_Request.
typedef struct kinematics_msgs__srv__SetLink_Request__Sequence
{
  kinematics_msgs__srv__SetLink_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetLink_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLink in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__SetLink_Response
{
  bool success;
  rosidl_runtime_c__String message;
} kinematics_msgs__srv__SetLink_Response;

// Struct for a sequence of kinematics_msgs__srv__SetLink_Response.
typedef struct kinematics_msgs__srv__SetLink_Response__Sequence
{
  kinematics_msgs__srv__SetLink_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__SetLink_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_LINK__STRUCT_H_
