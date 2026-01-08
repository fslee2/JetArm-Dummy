// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "large_models_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "large_models_msgs/msg/detail/agent_result__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace large_models_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_large_models_msgs
cdr_serialize(
  const large_models_msgs::msg::AgentResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_large_models_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  large_models_msgs::msg::AgentResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_large_models_msgs
get_serialized_size(
  const large_models_msgs::msg::AgentResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_large_models_msgs
max_serialized_size_AgentResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace large_models_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_large_models_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, large_models_msgs, msg, AgentResult)();

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
