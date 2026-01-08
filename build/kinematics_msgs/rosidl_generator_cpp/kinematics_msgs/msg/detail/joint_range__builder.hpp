// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:msg/JointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/msg/detail/joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace msg
{

namespace builder
{

class Init_JointRange_max
{
public:
  explicit Init_JointRange_max(::kinematics_msgs::msg::JointRange & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::msg::JointRange max(::kinematics_msgs::msg::JointRange::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::msg::JointRange msg_;
};

class Init_JointRange_min
{
public:
  Init_JointRange_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointRange_max min(::kinematics_msgs::msg::JointRange::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_JointRange_max(msg_);
  }

private:
  ::kinematics_msgs::msg::JointRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::msg::JointRange>()
{
  return kinematics_msgs::msg::builder::Init_JointRange_min();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_
