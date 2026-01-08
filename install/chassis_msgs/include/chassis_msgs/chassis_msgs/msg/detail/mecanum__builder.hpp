// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_MSGS__MSG__DETAIL__MECANUM__BUILDER_HPP_
#define CHASSIS_MSGS__MSG__DETAIL__MECANUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chassis_msgs/msg/detail/mecanum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chassis_msgs
{

namespace msg
{

namespace builder
{

class Init_Mecanum_angular_rate
{
public:
  explicit Init_Mecanum_angular_rate(::chassis_msgs::msg::Mecanum & msg)
  : msg_(msg)
  {}
  ::chassis_msgs::msg::Mecanum angular_rate(::chassis_msgs::msg::Mecanum::_angular_rate_type arg)
  {
    msg_.angular_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chassis_msgs::msg::Mecanum msg_;
};

class Init_Mecanum_direction
{
public:
  explicit Init_Mecanum_direction(::chassis_msgs::msg::Mecanum & msg)
  : msg_(msg)
  {}
  Init_Mecanum_angular_rate direction(::chassis_msgs::msg::Mecanum::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Mecanum_angular_rate(msg_);
  }

private:
  ::chassis_msgs::msg::Mecanum msg_;
};

class Init_Mecanum_velocity
{
public:
  Init_Mecanum_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mecanum_direction velocity(::chassis_msgs::msg::Mecanum::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Mecanum_direction(msg_);
  }

private:
  ::chassis_msgs::msg::Mecanum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chassis_msgs::msg::Mecanum>()
{
  return chassis_msgs::msg::builder::Init_Mecanum_velocity();
}

}  // namespace chassis_msgs

#endif  // CHASSIS_MSGS__MSG__DETAIL__MECANUM__BUILDER_HPP_
