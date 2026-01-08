// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_controller_msgs/msg/detail/grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Grasp & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << ", ";
  }

  // member: grasp_posture
  {
    out << "grasp_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_posture, out);
    out << ", ";
  }

  // member: pre_grasp_posture
  {
    out << "pre_grasp_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_grasp_posture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }

  // member: grasp_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_posture, out);
    out << "\n";
  }

  // member: pre_grasp_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_grasp_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_grasp_posture, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp & msg, bool use_flow_style = false)
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

}  // namespace servo_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use servo_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_controller_msgs::msg::Grasp & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const servo_controller_msgs::msg::Grasp & msg)
{
  return servo_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<servo_controller_msgs::msg::Grasp>()
{
  return "servo_controller_msgs::msg::Grasp";
}

template<>
inline const char * name<servo_controller_msgs::msg::Grasp>()
{
  return "servo_controller_msgs/msg/Grasp";
}

template<>
struct has_fixed_size<servo_controller_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_controller_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_controller_msgs::msg::Grasp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
