// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_MSGS__MSG__DETAIL__MECANUM__TRAITS_HPP_
#define CHASSIS_MSGS__MSG__DETAIL__MECANUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chassis_msgs/msg/detail/mecanum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chassis_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mecanum & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: angular_rate
  {
    out << "angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mecanum & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: angular_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mecanum & msg, bool use_flow_style = false)
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

}  // namespace chassis_msgs

namespace rosidl_generator_traits
{

[[deprecated("use chassis_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chassis_msgs::msg::Mecanum & msg,
  std::ostream & out, size_t indentation = 0)
{
  chassis_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chassis_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const chassis_msgs::msg::Mecanum & msg)
{
  return chassis_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chassis_msgs::msg::Mecanum>()
{
  return "chassis_msgs::msg::Mecanum";
}

template<>
inline const char * name<chassis_msgs::msg::Mecanum>()
{
  return "chassis_msgs/msg/Mecanum";
}

template<>
struct has_fixed_size<chassis_msgs::msg::Mecanum>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chassis_msgs::msg::Mecanum>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chassis_msgs::msg::Mecanum>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHASSIS_MSGS__MSG__DETAIL__MECANUM__TRAITS_HPP_
