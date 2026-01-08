// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xf_mic_asr_offline_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xf_mic_asr_offline_msgs/srv/detail/set_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xf_mic_asr_offline_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Request_data
{
public:
  Init_SetString_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xf_mic_asr_offline_msgs::srv::SetString_Request data(::xf_mic_asr_offline_msgs::srv::SetString_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xf_mic_asr_offline_msgs::srv::SetString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xf_mic_asr_offline_msgs::srv::SetString_Request>()
{
  return xf_mic_asr_offline_msgs::srv::builder::Init_SetString_Request_data();
}

}  // namespace xf_mic_asr_offline_msgs


namespace xf_mic_asr_offline_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Response_message
{
public:
  explicit Init_SetString_Response_message(::xf_mic_asr_offline_msgs::srv::SetString_Response & msg)
  : msg_(msg)
  {}
  ::xf_mic_asr_offline_msgs::srv::SetString_Response message(::xf_mic_asr_offline_msgs::srv::SetString_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xf_mic_asr_offline_msgs::srv::SetString_Response msg_;
};

class Init_SetString_Response_success
{
public:
  Init_SetString_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetString_Response_message success(::xf_mic_asr_offline_msgs::srv::SetString_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetString_Response_message(msg_);
  }

private:
  ::xf_mic_asr_offline_msgs::srv::SetString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xf_mic_asr_offline_msgs::srv::SetString_Response>()
{
  return xf_mic_asr_offline_msgs::srv::builder::Init_SetString_Response_success();
}

}  // namespace xf_mic_asr_offline_msgs

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
