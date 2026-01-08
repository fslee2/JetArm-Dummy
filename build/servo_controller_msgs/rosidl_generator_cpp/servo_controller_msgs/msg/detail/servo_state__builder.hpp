// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/servo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoState_voltage
{
public:
  explicit Init_ServoState_voltage(::servo_controller_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  ::servo_controller_msgs::msg::ServoState voltage(::servo_controller_msgs::msg::ServoState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoState msg_;
};

class Init_ServoState_error
{
public:
  explicit Init_ServoState_error(::servo_controller_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_voltage error(::servo_controller_msgs::msg::ServoState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_ServoState_voltage(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoState msg_;
};

class Init_ServoState_position
{
public:
  explicit Init_ServoState_position(::servo_controller_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_error position(::servo_controller_msgs::msg::ServoState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ServoState_error(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoState msg_;
};

class Init_ServoState_goal
{
public:
  explicit Init_ServoState_goal(::servo_controller_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_position goal(::servo_controller_msgs::msg::ServoState::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ServoState_position(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoState msg_;
};

class Init_ServoState_id
{
public:
  Init_ServoState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoState_goal id(::servo_controller_msgs::msg::ServoState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ServoState_goal(msg_);
  }

private:
  ::servo_controller_msgs::msg::ServoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::ServoState>()
{
  return servo_controller_msgs::msg::builder::Init_ServoState_id();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_
