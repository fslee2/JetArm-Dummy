// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:srv/GetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__BUILDER_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/srv/detail/get_joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::GetJointRange_Request>()
{
  return ::kinematics_msgs::srv::GetJointRange_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kinematics_msgs


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointRange_Response_data
{
public:
  explicit Init_GetJointRange_Response_data(::kinematics_msgs::srv::GetJointRange_Response & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::srv::GetJointRange_Response data(::kinematics_msgs::srv::GetJointRange_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::GetJointRange_Response msg_;
};

class Init_GetJointRange_Response_success
{
public:
  Init_GetJointRange_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointRange_Response_data success(::kinematics_msgs::srv::GetJointRange_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetJointRange_Response_data(msg_);
  }

private:
  ::kinematics_msgs::srv::GetJointRange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::GetJointRange_Response>()
{
  return kinematics_msgs::srv::builder::Init_GetJointRange_Response_success();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__BUILDER_HPP_
