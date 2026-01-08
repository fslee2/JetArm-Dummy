// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xf_mic_asr_offline_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package xf_mic_asr_offline_msgs.
typedef struct xf_mic_asr_offline_msgs__srv__SetString_Request
{
  rosidl_runtime_c__String data;
} xf_mic_asr_offline_msgs__srv__SetString_Request;

// Struct for a sequence of xf_mic_asr_offline_msgs__srv__SetString_Request.
typedef struct xf_mic_asr_offline_msgs__srv__SetString_Request__Sequence
{
  xf_mic_asr_offline_msgs__srv__SetString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xf_mic_asr_offline_msgs__srv__SetString_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package xf_mic_asr_offline_msgs.
typedef struct xf_mic_asr_offline_msgs__srv__SetString_Response
{
  bool success;
  rosidl_runtime_c__String message;
} xf_mic_asr_offline_msgs__srv__SetString_Response;

// Struct for a sequence of xf_mic_asr_offline_msgs__srv__SetString_Response.
typedef struct xf_mic_asr_offline_msgs__srv__SetString_Response__Sequence
{
  xf_mic_asr_offline_msgs__srv__SetString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xf_mic_asr_offline_msgs__srv__SetString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
