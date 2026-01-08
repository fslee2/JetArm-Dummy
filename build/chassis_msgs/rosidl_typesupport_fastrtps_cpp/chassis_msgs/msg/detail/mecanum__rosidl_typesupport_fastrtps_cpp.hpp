// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_MSGS__MSG__DETAIL__MECANUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CHASSIS_MSGS__MSG__DETAIL__MECANUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "chassis_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "chassis_msgs/msg/detail/mecanum__struct.hpp"

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

namespace chassis_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chassis_msgs
cdr_serialize(
  const chassis_msgs::msg::Mecanum & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chassis_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  chassis_msgs::msg::Mecanum & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chassis_msgs
get_serialized_size(
  const chassis_msgs::msg::Mecanum & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chassis_msgs
max_serialized_size_Mecanum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chassis_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chassis_msgs, msg, Mecanum)();

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_MSGS__MSG__DETAIL__MECANUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
