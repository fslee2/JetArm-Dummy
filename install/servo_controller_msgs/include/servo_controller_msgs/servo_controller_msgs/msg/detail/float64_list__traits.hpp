// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_controller_msgs:msg/Float64List.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__TRAITS_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_controller_msgs/msg/detail/float64_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float64List & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Float64List & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Float64List & msg, bool use_flow_style = false)
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
  const servo_controller_msgs::msg::Float64List & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const servo_controller_msgs::msg::Float64List & msg)
{
  return servo_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<servo_controller_msgs::msg::Float64List>()
{
  return "servo_controller_msgs::msg::Float64List";
}

template<>
inline const char * name<servo_controller_msgs::msg::Float64List>()
{
  return "servo_controller_msgs/msg/Float64List";
}

template<>
struct has_fixed_size<servo_controller_msgs::msg::Float64List>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_controller_msgs::msg::Float64List>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_controller_msgs::msg::Float64List>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__TRAITS_HPP_
