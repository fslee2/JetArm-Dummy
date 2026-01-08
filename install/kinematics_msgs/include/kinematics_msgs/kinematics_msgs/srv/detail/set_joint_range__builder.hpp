// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:srv/SetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/srv/detail/set_joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointRange_Request_data
{
public:
  Init_SetJointRange_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinematics_msgs::srv::SetJointRange_Request data(::kinematics_msgs::srv::SetJointRange_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointRange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetJointRange_Request>()
{
  return kinematics_msgs::srv::builder::Init_SetJointRange_Request_data();
}

}  // namespace kinematics_msgs


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointRange_Response_message
{
public:
  explicit Init_SetJointRange_Response_message(::kinematics_msgs::srv::SetJointRange_Response & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::srv::SetJointRange_Response message(::kinematics_msgs::srv::SetJointRange_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointRange_Response msg_;
};

class Init_SetJointRange_Response_success
{
public:
  Init_SetJointRange_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointRange_Response_message success(::kinematics_msgs::srv::SetJointRange_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointRange_Response_message(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointRange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetJointRange_Response>()
{
  return kinematics_msgs::srv::builder::Init_SetJointRange_Response_success();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_
