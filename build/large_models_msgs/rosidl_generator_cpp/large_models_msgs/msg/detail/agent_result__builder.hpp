// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__BUILDER_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "large_models_msgs/msg/detail/agent_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace large_models_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentResult_response
{
public:
  explicit Init_AgentResult_response(::large_models_msgs::msg::AgentResult & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::msg::AgentResult response(::large_models_msgs::msg::AgentResult::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::msg::AgentResult msg_;
};

class Init_AgentResult_action
{
public:
  Init_AgentResult_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentResult_response action(::large_models_msgs::msg::AgentResult::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_AgentResult_response(msg_);
  }

private:
  ::large_models_msgs::msg::AgentResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::msg::AgentResult>()
{
  return large_models_msgs::msg::builder::Init_AgentResult_action();
}

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__BUILDER_HPP_
