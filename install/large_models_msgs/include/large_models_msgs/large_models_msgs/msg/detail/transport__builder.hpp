// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__BUILDER_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "large_models_msgs/msg/detail/transport__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace large_models_msgs
{

namespace msg
{

namespace builder
{

class Init_Transport_position
{
public:
  explicit Init_Transport_position(::large_models_msgs::msg::Transport & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::msg::Transport position(::large_models_msgs::msg::Transport::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::msg::Transport msg_;
};

class Init_Transport_object_name
{
public:
  explicit Init_Transport_object_name(::large_models_msgs::msg::Transport & msg)
  : msg_(msg)
  {}
  Init_Transport_position object_name(::large_models_msgs::msg::Transport::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_Transport_position(msg_);
  }

private:
  ::large_models_msgs::msg::Transport msg_;
};

class Init_Transport_action
{
public:
  Init_Transport_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transport_object_name action(::large_models_msgs::msg::Transport::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Transport_object_name(msg_);
  }

private:
  ::large_models_msgs::msg::Transport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::msg::Transport>()
{
  return large_models_msgs::msg::builder::Init_Transport_action();
}

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__BUILDER_HPP_
