// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_controller_msgs:msg/ServosPosition.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "servo_controller_msgs/msg/detail/servo_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__servo_controller_msgs__msg__ServosPosition __attribute__((deprecated))
#else
# define DEPRECATED__servo_controller_msgs__msg__ServosPosition __declspec(deprecated)
#endif

namespace servo_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServosPosition_
{
  using Type = ServosPosition_<ContainerAllocator>;

  explicit ServosPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->position_unit = "";
    }
  }

  explicit ServosPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
      this->position_unit = "";
    }
  }

  // field types and members
  using _duration_type =
    double;
  _duration_type duration;
  using _position_unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_unit_type position_unit;
  using _position_type =
    std::vector<servo_controller_msgs::msg::ServoPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_controller_msgs::msg::ServoPosition_<ContainerAllocator>>>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__position_unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position_unit = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<servo_controller_msgs::msg::ServoPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_controller_msgs::msg::ServoPosition_<ContainerAllocator>>> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_controller_msgs__msg__ServosPosition
    std::shared_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_controller_msgs__msg__ServosPosition
    std::shared_ptr<servo_controller_msgs::msg::ServosPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServosPosition_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->position_unit != other.position_unit) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServosPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServosPosition_

// alias to use template instance with default allocator
using ServosPosition =
  servo_controller_msgs::msg::ServosPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__SERVOS_POSITION__STRUCT_HPP_
