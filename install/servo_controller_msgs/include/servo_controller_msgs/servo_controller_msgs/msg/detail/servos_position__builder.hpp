// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/ServosPosition.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/servos_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_ServosPosition_position
{
public:
  explicit Init_ServosPosition_position(::servo_controller_msgs::msg::ServosPosition & msg)
  : msg_(msg)
  {}
  ::servo_controller_msgs::msg::ServosPosition position(::servo_controller_msgs::msg::ServosPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServosPosition msg_;
};

class Init_ServosPosition_position_unit
{
public:
  explicit Init_ServosPosition_position_unit(::servo_controller_msgs::msg::ServosPosition & msg)
  : msg_(msg)
  {}
  Init_ServosPosition_position position_unit(::servo_controller_msgs::msg::ServosPosition::_position_unit_type arg)
  {
    msg_.position_unit = std::move(arg);
    return Init_ServosPosition_position(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServosPosition msg_;
};

class Init_ServosPosition_duration
{
public:
  Init_ServosPosition_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServosPosition_position_unit duration(::servo_controller_msgs::msg::ServosPosition::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ServosPosition_position_unit(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServosPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::ServosPosition>()
{
  return servo_controller_msgs::msg::builder::Init_ServosPosition_duration();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__BUILDER_HPP_
