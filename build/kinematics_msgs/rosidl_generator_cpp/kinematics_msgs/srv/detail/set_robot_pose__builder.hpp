// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinematics_msgs/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRobotPose_Request_duration
{
public:
  explicit Init_SetRobotPose_Request_duration(::kinematics_msgs::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::srv::SetRobotPose_Request duration(::kinematics_msgs::srv::SetRobotPose_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_resolution
{
public:
  explicit Init_SetRobotPose_Request_resolution(::kinematics_msgs::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_duration resolution(::kinematics_msgs::srv::SetRobotPose_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_SetRobotPose_Request_duration(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_pitch_range
{
public:
  explicit Init_SetRobotPose_Request_pitch_range(::kinematics_msgs::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_resolution pitch_range(::kinematics_msgs::srv::SetRobotPose_Request::_pitch_range_type arg)
  {
    msg_.pitch_range = std::move(arg);
    return Init_SetRobotPose_Request_resolution(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_pitch
{
public:
  explicit Init_SetRobotPose_Request_pitch(::kinematics_msgs::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_pitch_range pitch(::kinematics_msgs::srv::SetRobotPose_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SetRobotPose_Request_pitch_range(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_position
{
public:
  Init_SetRobotPose_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotPose_Request_pitch position(::kinematics_msgs::srv::SetRobotPose_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetRobotPose_Request_pitch(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetRobotPose_Request>()
{
  return kinematics_msgs::srv::builder::Init_SetRobotPose_Request_position();
}

}  // namespace kinematics_msgs


namespace kinematics_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRobotPose_Response_min_variation
{
public:
  explicit Init_SetRobotPose_Response_min_variation(::kinematics_msgs::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  ::kinematics_msgs::srv::SetRobotPose_Response min_variation(::kinematics_msgs::srv::SetRobotPose_Response::_min_variation_type arg)
  {
    msg_.min_variation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_rpy
{
public:
  explicit Init_SetRobotPose_Response_rpy(::kinematics_msgs::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_min_variation rpy(::kinematics_msgs::srv::SetRobotPose_Response::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_SetRobotPose_Response_min_variation(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_current_pulse
{
public:
  explicit Init_SetRobotPose_Response_current_pulse(::kinematics_msgs::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_rpy current_pulse(::kinematics_msgs::srv::SetRobotPose_Response::_current_pulse_type arg)
  {
    msg_.current_pulse = std::move(arg);
    return Init_SetRobotPose_Response_rpy(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_pulse
{
public:
  explicit Init_SetRobotPose_Response_pulse(::kinematics_msgs::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_current_pulse pulse(::kinematics_msgs::srv::SetRobotPose_Response::_pulse_type arg)
  {
    msg_.pulse = std::move(arg);
    return Init_SetRobotPose_Response_current_pulse(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_success
{
public:
  Init_SetRobotPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotPose_Response_pulse success(::kinematics_msgs::srv::SetRobotPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetRobotPose_Response_pulse(msg_);
  }

private:
  ::kinematics_msgs::srv::SetRobotPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinematics_msgs::srv::SetRobotPose_Response>()
{
  return kinematics_msgs::srv::builder::Init_SetRobotPose_Response_success();
}

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_
