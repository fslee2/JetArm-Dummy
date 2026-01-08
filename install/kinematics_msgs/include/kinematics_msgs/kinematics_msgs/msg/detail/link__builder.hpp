// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace msg
{

namespace builder
{

class Init_Link_end_effector_link
{
public:
  explicit Init_Link_end_effector_link(::kinematics_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::msg::Link end_effector_link(::kinematics_msgs::msg::Link::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::msg::Link msg_;
};

class Init_Link_link3
{
public:
  explicit Init_Link_link3(::kinematics_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_end_effector_link link3(::kinematics_msgs::msg::Link::_link3_type arg)
  {
    msg_.link3 = std::move(arg);
    return Init_Link_end_effector_link(msg_);
  }

private:
  ::kinematics_msgs::msg::Link msg_;
};

class Init_Link_link2
{
public:
  explicit Init_Link_link2(::kinematics_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_link3 link2(::kinematics_msgs::msg::Link::_link2_type arg)
  {
    msg_.link2 = std::move(arg);
    return Init_Link_link3(msg_);
  }

private:
  ::kinematics_msgs::msg::Link msg_;
};

class Init_Link_link1
{
public:
  explicit Init_Link_link1(::kinematics_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_link2 link1(::kinematics_msgs::msg::Link::_link1_type arg)
  {
    msg_.link1 = std::move(arg);
    return Init_Link_link2(msg_);
  }

private:
  ::kinematics_msgs::msg::Link msg_;
};

class Init_Link_base_link
{
public:
  Init_Link_base_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_link1 base_link(::kinematics_msgs::msg::Link::_base_link_type arg)
  {
    msg_.base_link = std::move(arg);
    return Init_Link_link1(msg_);
  }

private:
  ::kinematics_msgs::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::msg::Link>()
{
  return kinematics_msgs::msg::builder::Init_Link_base_link();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
