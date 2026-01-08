// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__TRAITS_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "large_models_msgs/msg/detail/transport__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace large_models_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Transport & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transport & msg, bool use_flow_style = false)
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

}  // namespace large_models_msgs

namespace rosidl_generator_traits
{

[[deprecated("use large_models_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const large_models_msgs::msg::Transport & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::msg::Transport & msg)
{
  return large_models_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::msg::Transport>()
{
  return "large_models_msgs::msg::Transport";
}

template<>
inline const char * name<large_models_msgs::msg::Transport>()
{
  return "large_models_msgs/msg/Transport";
}

template<>
struct has_fixed_size<large_models_msgs::msg::Transport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::msg::Transport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::msg::Transport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__TRAITS_HPP_
