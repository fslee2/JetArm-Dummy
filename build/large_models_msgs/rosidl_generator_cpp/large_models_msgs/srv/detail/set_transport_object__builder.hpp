// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from large_models_msgs:srv/SetTransportObject.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_TRANSPORT_OBJECT__BUILDER_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_TRANSPORT_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "large_models_msgs/srv/detail/set_transport_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTransportObject_Request_data
{
public:
  Init_SetTransportObject_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::large_models_msgs::srv::SetTransportObject_Request data(::large_models_msgs::srv::SetTransportObject_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetTransportObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetTransportObject_Request>()
{
  return large_models_msgs::srv::builder::Init_SetTransportObject_Request_data();
}

}  // namespace large_models_msgs


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTransportObject_Response_message
{
public:
  explicit Init_SetTransportObject_Response_message(::large_models_msgs::srv::SetTransportObject_Response & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::srv::SetTransportObject_Response message(::large_models_msgs::srv::SetTransportObject_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetTransportObject_Response msg_;
};

class Init_SetTransportObject_Response_success
{
public:
  Init_SetTransportObject_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTransportObject_Response_message success(::large_models_msgs::srv::SetTransportObject_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTransportObject_Response_message(msg_);
  }

private:
  ::large_models_msgs::srv::SetTransportObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetTransportObject_Response>()
{
  return large_models_msgs::srv::builder::Init_SetTransportObject_Response_success();
}

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_TRANSPORT_OBJECT__BUILDER_HPP_
