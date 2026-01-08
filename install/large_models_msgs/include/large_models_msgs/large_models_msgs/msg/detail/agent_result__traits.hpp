// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__TRAITS_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "large_models_msgs/msg/detail/agent_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace large_models_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    if (msg.action.size() == 0) {
      out << "action: []";
    } else {
      out << "action: [";
      size_t pending_items = msg.action.size();
      for (auto item : msg.action) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action.size() == 0) {
      out << "action: []\n";
    } else {
      out << "action:\n";
      for (auto item : msg.action) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentResult & msg, bool use_flow_style = false)
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
  const large_models_msgs::msg::AgentResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::msg::AgentResult & msg)
{
  return large_models_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::msg::AgentResult>()
{
  return "large_models_msgs::msg::AgentResult";
}

template<>
inline const char * name<large_models_msgs::msg::AgentResult>()
{
  return "large_models_msgs/msg/AgentResult";
}

template<>
struct has_fixed_size<large_models_msgs::msg::AgentResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::msg::AgentResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::msg::AgentResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__TRAITS_HPP_
