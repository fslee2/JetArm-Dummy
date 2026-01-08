// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinematics_msgs:msg/JointsRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__TRAITS_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinematics_msgs/msg/detail/joints_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint1'
// Member 'joint2'
// Member 'joint3'
// Member 'joint4'
// Member 'joint5'
#include "kinematics_msgs/msg/detail/joint_range__traits.hpp"

namespace kinematics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointsRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1
  {
    out << "joint1: ";
    to_flow_style_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    to_flow_style_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    to_flow_style_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    to_flow_style_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: joint5
  {
    out << "joint5: ";
    to_flow_style_yaml(msg.joint5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointsRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1:\n";
    to_block_style_yaml(msg.joint1, out, indentation + 2);
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2:\n";
    to_block_style_yaml(msg.joint2, out, indentation + 2);
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3:\n";
    to_block_style_yaml(msg.joint3, out, indentation + 2);
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4:\n";
    to_block_style_yaml(msg.joint4, out, indentation + 2);
  }

  // member: joint5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5:\n";
    to_block_style_yaml(msg.joint5, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointsRange & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kinematics_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kinematics_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinematics_msgs::msg::JointsRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::msg::JointsRange & msg)
{
  return kinematics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::msg::JointsRange>()
{
  return "kinematics_msgs::msg::JointsRange";
}

template<>
inline const char * name<kinematics_msgs::msg::JointsRange>()
{
  return "kinematics_msgs/msg/JointsRange";
}

template<>
struct has_fixed_size<kinematics_msgs::msg::JointsRange>
  : std::integral_constant<bool, has_fixed_size<kinematics_msgs::msg::JointRange>::value> {};

template<>
struct has_bounded_size<kinematics_msgs::msg::JointsRange>
  : std::integral_constant<bool, has_bounded_size<kinematics_msgs::msg::JointRange>::value> {};

template<>
struct is_message<kinematics_msgs::msg::JointsRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__TRAITS_HPP_
