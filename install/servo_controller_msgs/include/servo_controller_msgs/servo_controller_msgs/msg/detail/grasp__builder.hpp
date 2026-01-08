// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_controller_msgs/msg/detail/grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_Grasp_pre_grasp_posture
{
public:
  explicit Init_Grasp_pre_grasp_posture(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  ::servo_controller_msgs::msg::Grasp pre_grasp_posture(::servo_controller_msgs::msg::Grasp::_pre_grasp_posture_type arg)
  {
    msg_.pre_grasp_posture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_grasp_posture
{
public:
  explicit Init_Grasp_grasp_posture(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_pre_grasp_posture grasp_posture(::servo_controller_msgs::msg::Grasp::_grasp_posture_type arg)
  {
    msg_.grasp_posture = std::move(arg);
    return Init_Grasp_pre_grasp_posture(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_gripper
{
public:
  explicit Init_Grasp_gripper(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_grasp_posture gripper(::servo_controller_msgs::msg::Grasp::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return Init_Grasp_grasp_posture(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_angle
{
public:
  explicit Init_Grasp_angle(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_gripper angle(::servo_controller_msgs::msg::Grasp::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Grasp_gripper(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_pitch
{
public:
  explicit Init_Grasp_pitch(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_angle pitch(::servo_controller_msgs::msg::Grasp::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Grasp_angle(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_position
{
public:
  explicit Init_Grasp_position(::servo_controller_msgs::msg::Grasp & msg)
  : msg_(msg)
  {}
  Init_Grasp_pitch position(::servo_controller_msgs::msg::Grasp::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Grasp_pitch(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

class Init_Grasp_mode
{
public:
  Init_Grasp_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grasp_position mode(::servo_controller_msgs::msg::Grasp::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Grasp_position(msg_);
  }

private:
  ::servo_controller_msgs::msg::Grasp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_controller_msgs::msg::Grasp>()
{
  return servo_controller_msgs::msg::builder::Init_Grasp_mode();
}

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__BUILDER_HPP_
