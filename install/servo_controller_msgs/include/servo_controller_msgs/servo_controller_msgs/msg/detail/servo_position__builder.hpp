// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/ServoPosition.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/servo_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoPosition_position
{
public:
  explicit Init_ServoPosition_position(::servo_controller_msgs::msg::ServoPosition & msg)
  : msg_(msg)
  {}
  ::servo_controller_msgs::msg::ServoPosition position(::servo_controller_msgs::msg::ServoPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoPosition msg_;
};

class Init_ServoPosition_id
{
public:
  Init_ServoPosition_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoPosition_position id(::servo_controller_msgs::msg::ServoPosition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ServoPosition_position(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::ServoPosition>()
{
  return servo_controller_msgs::msg::builder::Init_ServoPosition_id();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_POSITION__BUILDER_HPP_
