// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xf_mic_asr_offline_msgs:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_H_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetOfflineResult in the package xf_mic_asr_offline_msgs.
typedef struct xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request
{
  int8_t offline_recognise_start;
  int8_t confidence_threshold;
  int8_t time_per_order;
} xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request;

// Struct for a sequence of xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request.
typedef struct xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request__Sequence
{
  xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// Member 'fail_reason'
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetOfflineResult in the package xf_mic_asr_offline_msgs.
typedef struct xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response
{
  rosidl_runtime_c__String result;
  rosidl_runtime_c__String fail_reason;
  rosidl_runtime_c__String text;
} xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response;

// Struct for a sequence of xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response.
typedef struct xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response__Sequence
{
  xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_H_
