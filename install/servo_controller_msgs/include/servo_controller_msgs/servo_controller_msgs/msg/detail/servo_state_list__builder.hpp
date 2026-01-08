// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/servo_state_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoStateList_servo_state
{
public:
  explicit Init_ServoStateList_servo_state(::servo_controller_msgs::msg::ServoStateList & msg)
  : msg_(msg)
  {}
  ::servo_controller_msgs::msg::ServoStateList servo_state(::servo_controller_msgs::msg::ServoStateList::_servo_state_type arg)
  {
    msg_.servo_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoStateList msg_;
};

class Init_ServoStateList_header
{
public:
  Init_ServoStateList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoStateList_servo_state header(::servo_controller_msgs::msg::ServoStateList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoStateList_servo_state(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoStateList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::ServoStateList>()
{
  return servo_controller_msgs::msg::builder::Init_ServoStateList_header();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_
