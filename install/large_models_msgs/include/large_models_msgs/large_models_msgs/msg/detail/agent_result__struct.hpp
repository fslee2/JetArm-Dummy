// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_HPP_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__large_models_msgs__msg__AgentResult __attribute__((deprecated))
#else
# define DEPRECATED__large_models_msgs__msg__AgentResult __declspec(deprecated)
#endif

namespace large_models_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentResult_
{
  using Type = AgentResult_<ContainerAllocator>;

  explicit AgentResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit AgentResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _action_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _action_type action;
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__action(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    large_models_msgs::msg::AgentResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const large_models_msgs::msg::AgentResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::msg::AgentResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::msg::AgentResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__large_models_msgs__msg__AgentResult
    std::shared_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__large_models_msgs__msg__AgentResult
    std::shared_ptr<large_models_msgs::msg::AgentResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentResult_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentResult_

// alias to use template instance with default allocator
using AgentResult =
  large_models_msgs::msg::AgentResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__STRUCT_HPP_
