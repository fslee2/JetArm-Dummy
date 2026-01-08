// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from large_models_msgs:srv/SetBox.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__BUILDER_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "large_models_msgs/srv/detail/set_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBox_Request_label
{
public:
  explicit Init_SetBox_Request_label(::large_models_msgs::srv::SetBox_Request & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::srv::SetBox_Request label(::large_models_msgs::srv::SetBox_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetBox_Request msg_;
};

class Init_SetBox_Request_offset
{
public:
  explicit Init_SetBox_Request_offset(::large_models_msgs::srv::SetBox_Request & msg)
  : msg_(msg)
  {}
  Init_SetBox_Request_label offset(::large_models_msgs::srv::SetBox_Request::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SetBox_Request_label(msg_);
  }

private:
  ::large_models_msgs::srv::SetBox_Request msg_;
};

class Init_SetBox_Request_box
{
public:
  Init_SetBox_Request_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBox_Request_offset box(::large_models_msgs::srv::SetBox_Request::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_SetBox_Request_offset(msg_);
  }

private:
  ::large_models_msgs::srv::SetBox_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetBox_Request>()
{
  return large_models_msgs::srv::builder::Init_SetBox_Request_box();
}

}  // namespace large_models_msgs


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBox_Response_message
{
public:
  explicit Init_SetBox_Response_message(::large_models_msgs::srv::SetBox_Response & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::srv::SetBox_Response message(::large_models_msgs::srv::SetBox_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetBox_Response msg_;
};

class Init_SetBox_Response_success
{
public:
  Init_SetBox_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBox_Response_message success(::large_models_msgs::srv::SetBox_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBox_Response_message(msg_);
  }

private:
  ::large_models_msgs::srv::SetBox_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetBox_Response>()
{
  return large_models_msgs::srv::builder::Init_SetBox_Response_success();
}

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__BUILDER_HPP_
