// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:msg/JointsRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__BUILDER_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/msg/detail/joints_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace msg
{

namespace builder
{

class Init_JointsRange_joint5
{
public:
  explicit Init_JointsRange_joint5(::kinematics_msgs::msg::JointsRange & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::msg::JointsRange joint5(::kinematics_msgs::msg::JointsRange::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::msg::JointsRange msg_;
};

class Init_JointsRange_joint4
{
public:
  explicit Init_JointsRange_joint4(::kinematics_msgs::msg::JointsRange & msg)
  : msg_(msg)
  {}
  Init_JointsRange_joint5 joint4(::kinematics_msgs::msg::JointsRange::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_JointsRange_joint5(msg_);
  }

private:
  ::kinematics_msgs::msg::JointsRange msg_;
};

class Init_JointsRange_joint3
{
public:
  explicit Init_JointsRange_joint3(::kinematics_msgs::msg::JointsRange & msg)
  : msg_(msg)
  {}
  Init_JointsRange_joint4 joint3(::kinematics_msgs::msg::JointsRange::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_JointsRange_joint4(msg_);
  }

private:
  ::kinematics_msgs::msg::JointsRange msg_;
};

class Init_JointsRange_joint2
{
public:
  explicit Init_JointsRange_joint2(::kinematics_msgs::msg::JointsRange & msg)
  : msg_(msg)
  {}
  Init_JointsRange_joint3 joint2(::kinematics_msgs::msg::JointsRange::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_JointsRange_joint3(msg_);
  }

private:
  ::kinematics_msgs::msg::JointsRange msg_;
};

class Init_JointsRange_joint1
{
public:
  Init_JointsRange_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointsRange_joint2 joint1(::kinematics_msgs::msg::JointsRange::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_JointsRange_joint2(msg_);
  }

private:
  ::kinematics_msgs::msg::JointsRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::msg::JointsRange>()
{
  return kinematics_msgs::msg::builder::Init_JointsRange_joint1();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__BUILDER_HPP_
