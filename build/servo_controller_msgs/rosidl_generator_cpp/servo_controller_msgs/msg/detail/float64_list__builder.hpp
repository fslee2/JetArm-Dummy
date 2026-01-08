// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/Float64List.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/float64_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64List_positions
{
public:
  Init_Float64List_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_controller_msgs::msg::Float64List positions(::servo_controller_msgs::msg::Float64List::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::Float64List msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::Float64List>()
{
  return servo_controller_msgs::msg::builder::Init_Float64List_positions();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__BUILDER_HPP_
