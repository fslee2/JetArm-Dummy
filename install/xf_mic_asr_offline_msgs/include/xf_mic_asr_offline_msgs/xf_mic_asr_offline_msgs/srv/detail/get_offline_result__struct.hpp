// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xf_mic_asr_offline_msgs:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_HPP_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request __declspec(deprecated)
#endif

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetOfflineResult_Request_
{
  using Type = GetOfflineResult_Request_<ContainerAllocator>;

  explicit GetOfflineResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offline_recognise_start = 0;
      this->confidence_threshold = 0;
      this->time_per_order = 0;
    }
  }

  explicit GetOfflineResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offline_recognise_start = 0;
      this->confidence_threshold = 0;
      this->time_per_order = 0;
    }
  }

  // field types and members
  using _offline_recognise_start_type =
    int8_t;
  _offline_recognise_start_type offline_recognise_start;
  using _confidence_threshold_type =
    int8_t;
  _confidence_threshold_type confidence_threshold;
  using _time_per_order_type =
    int8_t;
  _time_per_order_type time_per_order;

  // setters for named parameter idiom
  Type & set__offline_recognise_start(
    const int8_t & _arg)
  {
    this->offline_recognise_start = _arg;
    return *this;
  }
  Type & set__confidence_threshold(
    const int8_t & _arg)
  {
    this->confidence_threshold = _arg;
    return *this;
  }
  Type & set__time_per_order(
    const int8_t & _arg)
  {
    this->time_per_order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Request
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetOfflineResult_Request_ & other) const
  {
    if (this->offline_recognise_start != other.offline_recognise_start) {
      return false;
    }
    if (this->confidence_threshold != other.confidence_threshold) {
      return false;
    }
    if (this->time_per_order != other.time_per_order) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetOfflineResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetOfflineResult_Request_

// alias to use template instance with default allocator
using GetOfflineResult_Request =
  xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xf_mic_asr_offline_msgs


#ifndef _WIN32
# define DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response __declspec(deprecated)
#endif

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetOfflineResult_Response_
{
  using Type = GetOfflineResult_Response_<ContainerAllocator>;

  explicit GetOfflineResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->fail_reason = "";
      this->text = "";
    }
  }

  explicit GetOfflineResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc),
    fail_reason(_alloc),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->fail_reason = "";
      this->text = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;
  using _fail_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fail_reason_type fail_reason;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__fail_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fail_reason = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xf_mic_asr_offline_msgs__srv__GetOfflineResult_Response
    std::shared_ptr<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetOfflineResult_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->fail_reason != other.fail_reason) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetOfflineResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetOfflineResult_Response_

// alias to use template instance with default allocator
using GetOfflineResult_Response =
  xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xf_mic_asr_offline_msgs

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

struct GetOfflineResult
{
  using Request = xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request;
  using Response = xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response;
};

}  // namespace srv

}  // namespace xf_mic_asr_offline_msgs

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__STRUCT_HPP_
