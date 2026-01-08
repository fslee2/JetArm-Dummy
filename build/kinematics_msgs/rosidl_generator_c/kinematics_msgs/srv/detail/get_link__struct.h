// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinematics_msgs:srv/GetLink.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_LINK__STRUCT_H_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLink in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetLink_Request
{
  uint8_t structure_needs_at_least_one_member;
} kinematics_msgs__srv__GetLink_Request;

// Struct for a sequence of kinematics_msgs__srv__GetLink_Request.
typedef struct kinematics_msgs__srv__GetLink_Request__Sequence
{
  kinematics_msgs__srv__GetLink_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetLink_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/link__struct.h"

/// Struct defined in srv/GetLink in the package kinematics_msgs.
typedef struct kinematics_msgs__srv__GetLink_Response
{
  bool success;
  kinematics_msgs__msg__Link data;
} kinematics_msgs__srv__GetLink_Response;

// Struct for a sequence of kinematics_msgs__srv__GetLink_Response.
typedef struct kinematics_msgs__srv__GetLink_Response__Sequence
{
  kinematics_msgs__srv__GetLink_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinematics_msgs__srv__GetLink_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_LINK__STRUCT_H_
