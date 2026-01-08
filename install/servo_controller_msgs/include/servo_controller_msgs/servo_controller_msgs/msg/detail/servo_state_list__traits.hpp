// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_controller_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_controller_msgs/msg/detail/servo_state_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'servo_state'
#include "servo_controller_msgs/msg/detail/servo_state__traits.hpp"

namespace servo_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoStateList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: servo_state
  {
    if (msg.servo_state.size() == 0) {
      out << "servo_state: []";
    } else {
      out << "servo_state: [";
      size_t pending_items = msg.servo_state.size();
      for (auto item : msg.servo_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: servo_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_state.size() == 0) {
      out << "servo_state: []\n";
    } else {
      out << "servo_state:\n";
      for (auto item : msg.servo_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoStateList & msg, bool use_flow_style = false)
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
  const servo_controller_msgs::msg::ServoStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const servo_controller_msgs::msg::ServoStateList & msg)
{
  return servo_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<servo_controller_msgs::msg::ServoStateList>()
{
  return "servo_controller_msgs::msg::ServoStateList";
}

template<>
inline const char * name<servo_controller_msgs::msg::ServoStateList>()
{
  return "servo_controller_msgs/msg/ServoStateList";
}

template<>
struct has_fixed_size<servo_controller_msgs::msg::ServoStateList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_controller_msgs::msg::ServoStateList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_controller_msgs::msg::ServoStateList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_
