// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_controller_msgs:msg/Float64List.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__STRUCT_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__servo_controller_msgs__msg__Float64List __attribute__((deprecated))
#else
# define DEPRECATED__servo_controller_msgs__msg__Float64List __declspec(deprecated)
#endif

namespace servo_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float64List_
{
  using Type = Float64List_<ContainerAllocator>;

  explicit Float64List_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Float64List_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_controller_msgs::msg::Float64List_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_controller_msgs::msg::Float64List_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::Float64List_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::Float64List_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_controller_msgs__msg__Float64List
    std::shared_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_controller_msgs__msg__Float64List
    std::shared_ptr<servo_controller_msgs::msg::Float64List_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float64List_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float64List_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float64List_

// alias to use template instance with default allocator
using Float64List =
  servo_controller_msgs::msg::Float64List_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__FLOAT64_LIST__STRUCT_HPP_
