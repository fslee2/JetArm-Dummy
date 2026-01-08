// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kinematics_msgs__srv__SetRobotPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__kinematics_msgs__srv__SetRobotPose_Request __declspec(deprecated)
#endif

namespace kinematics_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotPose_Request_
{
  using Type = SetRobotPose_Request_<ContainerAllocator>;

  explicit SetRobotPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->resolution = 0.0;
      this->duration = 0.0;
    }
  }

  explicit SetRobotPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0;
      this->resolution = 0.0;
      this->duration = 0.0;
    }
  }

  // field types and members
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _pitch_range_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pitch_range_type pitch_range;
  using _resolution_type =
    double;
  _resolution_type resolution;
  using _duration_type =
    double;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__pitch_range(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pitch_range = _arg;
    return *this;
  }
  Type & set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinematics_msgs__srv__SetRobotPose_Request
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinematics_msgs__srv__SetRobotPose_Request
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotPose_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->pitch_range != other.pitch_range) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotPose_Request_

// alias to use template instance with default allocator
using SetRobotPose_Request =
  kinematics_msgs::srv::SetRobotPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinematics_msgs


#ifndef _WIN32
# define DEPRECATED__kinematics_msgs__srv__SetRobotPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__kinematics_msgs__srv__SetRobotPose_Response __declspec(deprecated)
#endif

namespace kinematics_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotPose_Response_
{
  using Type = SetRobotPose_Response_<ContainerAllocator>;

  explicit SetRobotPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->min_variation = 0.0;
    }
  }

  explicit SetRobotPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->min_variation = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _pulse_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _pulse_type pulse;
  using _current_pulse_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _current_pulse_type current_pulse;
  using _rpy_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _rpy_type rpy;
  using _min_variation_type =
    double;
  _min_variation_type min_variation;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__pulse(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->pulse = _arg;
    return *this;
  }
  Type & set__current_pulse(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->current_pulse = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__min_variation(
    const double & _arg)
  {
    this->min_variation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinematics_msgs__srv__SetRobotPose_Response
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinematics_msgs__srv__SetRobotPose_Response
    std::shared_ptr<kinematics_msgs::srv::SetRobotPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->pulse != other.pulse) {
      return false;
    }
    if (this->current_pulse != other.current_pulse) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->min_variation != other.min_variation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotPose_Response_

// alias to use template instance with default allocator
using SetRobotPose_Response =
  kinematics_msgs::srv::SetRobotPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinematics_msgs

namespace kinematics_msgs
{

namespace srv
{

struct SetRobotPose
{
  using Request = kinematics_msgs::srv::SetRobotPose_Request;
  using Response = kinematics_msgs::srv::SetRobotPose_Response;
};

}  // namespace srv

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_HPP_
