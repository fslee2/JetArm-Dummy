// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:srv/SetJointValue.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/srv/detail/set_joint_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointValue_Request_joint_value
{
public:
  Init_SetJointValue_Request_joint_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinematics_msgs::srv::SetJointValue_Request joint_value(::kinematics_msgs::srv::SetJointValue_Request::_joint_value_type arg)
  {
    msg_.joint_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetJointValue_Request>()
{
  return kinematics_msgs::srv::builder::Init_SetJointValue_Request_joint_value();
}

}  // namespace kinematics_msgs


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointValue_Response_pose
{
public:
  explicit Init_SetJointValue_Response_pose(::kinematics_msgs::srv::SetJointValue_Response & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::srv::SetJointValue_Response pose(::kinematics_msgs::srv::SetJointValue_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointValue_Response msg_;
};

class Init_SetJointValue_Response_solution
{
public:
  explicit Init_SetJointValue_Response_solution(::kinematics_msgs::srv::SetJointValue_Response & msg)
  : msg_(msg)
  {}
  Init_SetJointValue_Response_pose solution(::kinematics_msgs::srv::SetJointValue_Response::_solution_type arg)
  {
    msg_.solution = std::move(arg);
    return Init_SetJointValue_Response_pose(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointValue_Response msg_;
};

class Init_SetJointValue_Response_success
{
public:
  Init_SetJointValue_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointValue_Response_solution success(::kinematics_msgs::srv::SetJointValue_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointValue_Response_solution(msg_);
  }

private:
  ::kinematics_msgs::srv::SetJointValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetJointValue_Response>()
{
  return kinematics_msgs::srv::builder::Init_SetJointValue_Response_success();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_
