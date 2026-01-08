// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kinematics_msgs:srv/GetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kinematics_msgs__srv__GetJointRange_Request __attribute__((deprecated))
#else
# define DEPRECATED__kinematics_msgs__srv__GetJointRange_Request __declspec(deprecated)
#endif

namespace kinematics_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointRange_Request_
{
  using Type = GetJointRange_Request_<ContainerAllocator>;

  explicit GetJointRange_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetJointRange_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinematics_msgs__srv__GetJointRange_Request
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinematics_msgs__srv__GetJointRange_Request
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointRange_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointRange_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointRange_Request_

// alias to use template instance with default allocator
using GetJointRange_Request =
  kinematics_msgs::srv::GetJointRange_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinematics_msgs


// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/joints_range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kinematics_msgs__srv__GetJointRange_Response __attribute__((deprecated))
#else
# define DEPRECATED__kinematics_msgs__srv__GetJointRange_Response __declspec(deprecated)
#endif

namespace kinematics_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointRange_Response_
{
  using Type = GetJointRange_Response_<ContainerAllocator>;

  explicit GetJointRange_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetJointRange_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _data_type =
    kinematics_msgs::msg::JointsRange_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__data(
    const kinematics_msgs::msg::JointsRange_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinematics_msgs__srv__GetJointRange_Response
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinematics_msgs__srv__GetJointRange_Response
    std::shared_ptr<kinematics_msgs::srv::GetJointRange_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointRange_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointRange_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointRange_Response_

// alias to use template instance with default allocator
using GetJointRange_Response =
  kinematics_msgs::srv::GetJointRange_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinematics_msgs

namespace kinematics_msgs
{

namespace srv
{

struct GetJointRange
{
  using Request = kinematics_msgs::srv::GetJointRange_Request;
  using Response = kinematics_msgs::srv::GetJointRange_Response;
};

}  // namespace srv

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__STRUCT_HPP_
