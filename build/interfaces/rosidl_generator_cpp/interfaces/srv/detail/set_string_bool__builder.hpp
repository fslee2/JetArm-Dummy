// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetStringBool.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_STRING_BOOL__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_STRING_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_string_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStringBool_Request_data_bool
{
public:
  explicit Init_SetStringBool_Request_data_bool(::interfaces::srv::SetStringBool_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetStringBool_Request data_bool(::interfaces::srv::SetStringBool_Request::_data_bool_type arg)
  {
    msg_.data_bool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetStringBool_Request msg_;
};

class Init_SetStringBool_Request_data_str
{
public:
  Init_SetStringBool_Request_data_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStringBool_Request_data_bool data_str(::interfaces::srv::SetStringBool_Request::_data_str_type arg)
  {
    msg_.data_str = std::move(arg);
    return Init_SetStringBool_Request_data_bool(msg_);
  }

private:
  ::interfaces::srv::SetStringBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetStringBool_Request>()
{
  return interfaces::srv::builder::Init_SetStringBool_Request_data_str();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStringBool_Response_message
{
public:
  explicit Init_SetStringBool_Response_message(::interfaces::srv::SetStringBool_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetStringBool_Response message(::interfaces::srv::SetStringBool_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetStringBool_Response msg_;
};

class Init_SetStringBool_Response_success
{
public:
  Init_SetStringBool_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStringBool_Response_message success(::interfaces::srv::SetStringBool_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetStringBool_Response_message(msg_);
  }

private:
  ::interfaces::srv::SetStringBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetStringBool_Response>()
{
  return interfaces::srv::builder::Init_SetStringBool_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_STRING_BOOL__BUILDER_HPP_
