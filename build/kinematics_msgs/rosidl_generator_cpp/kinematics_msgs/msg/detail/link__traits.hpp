// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinematics_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinematics_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinematics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Link & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_link
  {
    out << "base_link: ";
    rosidl_generator_traits::value_to_yaml(msg.base_link, out);
    out << ", ";
  }

  // member: link1
  {
    out << "link1: ";
    rosidl_generator_traits::value_to_yaml(msg.link1, out);
    out << ", ";
  }

  // member: link2
  {
    out << "link2: ";
    rosidl_generator_traits::value_to_yaml(msg.link2, out);
    out << ", ";
  }

  // member: link3
  {
    out << "link3: ";
    rosidl_generator_traits::value_to_yaml(msg.link3, out);
    out << ", ";
  }

  // member: end_effector_link
  {
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_link: ";
    rosidl_generator_traits::value_to_yaml(msg.base_link, out);
    out << "\n";
  }

  // member: link1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1: ";
    rosidl_generator_traits::value_to_yaml(msg.link1, out);
    out << "\n";
  }

  // member: link2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2: ";
    rosidl_generator_traits::value_to_yaml(msg.link2, out);
    out << "\n";
  }

  // member: link3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link3: ";
    rosidl_generator_traits::value_to_yaml(msg.link3, out);
    out << "\n";
  }

  // member: end_effector_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Link & msg, bool use_flow_style = false)
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
  const kinematics_msgs::msg::Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::msg::Link & msg)
{
  return kinematics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::msg::Link>()
{
  return "kinematics_msgs::msg::Link";
}

template<>
inline const char * name<kinematics_msgs::msg::Link>()
{
  return "kinematics_msgs/msg/Link";
}

template<>
struct has_fixed_size<kinematics_msgs::msg::Link>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinematics_msgs::msg::Link>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinematics_msgs::msg::Link>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KINEMATICS_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
