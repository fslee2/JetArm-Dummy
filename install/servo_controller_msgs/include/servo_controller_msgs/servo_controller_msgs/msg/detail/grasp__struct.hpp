// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__servo_controller_msgs__msg__Grasp __attribute__((deprecated))
#else
# define DEPRECATED__servo_controller_msgs__msg__Grasp __declspec(deprecated)
#endif

namespace servo_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Grasp_
{
  using Type = Grasp_<ContainerAllocator>;

  explicit Grasp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->pitch = 0;
      this->angle = 0.0;
      this->gripper = 0;
      this->grasp_posture = 0;
      this->pre_grasp_posture = 0;
    }
  }

  explicit Grasp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->pitch = 0;
      this->angle = 0.0;
      this->gripper = 0;
      this->grasp_posture = 0;
      this->pre_grasp_posture = 0;
    }
  }

  // field types and members
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _pitch_type =
    uint16_t;
  _pitch_type pitch;
  using _angle_type =
    double;
  _angle_type angle;
  using _gripper_type =
    uint16_t;
  _gripper_type gripper;
  using _grasp_posture_type =
    uint16_t;
  _grasp_posture_type grasp_posture;
  using _pre_grasp_posture_type =
    uint16_t;
  _pre_grasp_posture_type pre_grasp_posture;

  // setters for named parameter idiom
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__pitch(
    const uint16_t & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__gripper(
    const uint16_t & _arg)
  {
    this->gripper = _arg;
    return *this;
  }
  Type & set__grasp_posture(
    const uint16_t & _arg)
  {
    this->grasp_posture = _arg;
    return *this;
  }
  Type & set__pre_grasp_posture(
    const uint16_t & _arg)
  {
    this->pre_grasp_posture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_controller_msgs::msg::Grasp_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_controller_msgs::msg::Grasp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::Grasp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_controller_msgs::msg::Grasp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_controller_msgs__msg__Grasp
    std::shared_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_controller_msgs__msg__Grasp
    std::shared_ptr<servo_controller_msgs::msg::Grasp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grasp_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    if (this->grasp_posture != other.grasp_posture) {
      return false;
    }
    if (this->pre_grasp_posture != other.pre_grasp_posture) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grasp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grasp_

// alias to use template instance with default allocator
using Grasp =
  servo_controller_msgs::msg::Grasp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_controller_msgs

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__STRUCT_HPP_
