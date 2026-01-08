// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from large_models_msgs:srv/SetContent.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_CONTENT__BUILDER_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_CONTENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "large_models_msgs/srv/detail/set_content__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetContent_Request_image
{
public:
  explicit Init_SetContent_Request_image(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::srv::SetContent_Request image(::large_models_msgs::srv::SetContent_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_query
{
public:
  explicit Init_SetContent_Request_query(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_image query(::large_models_msgs::srv::SetContent_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return Init_SetContent_Request_image(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_prompt
{
public:
  explicit Init_SetContent_Request_prompt(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_query prompt(::large_models_msgs::srv::SetContent_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return Init_SetContent_Request_query(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_secret_key
{
public:
  explicit Init_SetContent_Request_secret_key(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_prompt secret_key(::large_models_msgs::srv::SetContent_Request::_secret_key_type arg)
  {
    msg_.secret_key = std::move(arg);
    return Init_SetContent_Request_prompt(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_app_key
{
public:
  explicit Init_SetContent_Request_app_key(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_secret_key app_key(::large_models_msgs::srv::SetContent_Request::_app_key_type arg)
  {
    msg_.app_key = std::move(arg);
    return Init_SetContent_Request_secret_key(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_token
{
public:
  explicit Init_SetContent_Request_token(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_app_key token(::large_models_msgs::srv::SetContent_Request::_token_type arg)
  {
    msg_.token = std::move(arg);
    return Init_SetContent_Request_app_key(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_conversation_id
{
public:
  explicit Init_SetContent_Request_conversation_id(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_token conversation_id(::large_models_msgs::srv::SetContent_Request::_conversation_id_type arg)
  {
    msg_.conversation_id = std::move(arg);
    return Init_SetContent_Request_token(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_app_id
{
public:
  explicit Init_SetContent_Request_app_id(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_conversation_id app_id(::large_models_msgs::srv::SetContent_Request::_app_id_type arg)
  {
    msg_.app_id = std::move(arg);
    return Init_SetContent_Request_conversation_id(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_base_url
{
public:
  explicit Init_SetContent_Request_base_url(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_app_id base_url(::large_models_msgs::srv::SetContent_Request::_base_url_type arg)
  {
    msg_.base_url = std::move(arg);
    return Init_SetContent_Request_app_id(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_api_key
{
public:
  explicit Init_SetContent_Request_api_key(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_base_url api_key(::large_models_msgs::srv::SetContent_Request::_api_key_type arg)
  {
    msg_.api_key = std::move(arg);
    return Init_SetContent_Request_base_url(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_model
{
public:
  explicit Init_SetContent_Request_model(::large_models_msgs::srv::SetContent_Request & msg)
  : msg_(msg)
  {}
  Init_SetContent_Request_api_key model(::large_models_msgs::srv::SetContent_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_SetContent_Request_api_key(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

class Init_SetContent_Request_platform
{
public:
  Init_SetContent_Request_platform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetContent_Request_model platform(::large_models_msgs::srv::SetContent_Request::_platform_type arg)
  {
    msg_.platform = std::move(arg);
    return Init_SetContent_Request_model(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetContent_Request>()
{
  return large_models_msgs::srv::builder::Init_SetContent_Request_platform();
}

}  // namespace large_models_msgs


namespace large_models_msgs
{

namespace srv
{

namespace builder
{

class Init_SetContent_Response_message
{
public:
  explicit Init_SetContent_Response_message(::large_models_msgs::srv::SetContent_Response & msg)
  : msg_(msg)
  {}
  ::large_models_msgs::srv::SetContent_Response message(::large_models_msgs::srv::SetContent_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Response msg_;
};

class Init_SetContent_Response_success
{
public:
  Init_SetContent_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetContent_Response_message success(::large_models_msgs::srv::SetContent_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetContent_Response_message(msg_);
  }

private:
  ::large_models_msgs::srv::SetContent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::large_models_msgs::srv::SetContent_Response>()
{
  return large_models_msgs::srv::builder::Init_SetContent_Response_success();
}

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_CONTENT__BUILDER_HPP_
