// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_HPP_
#define ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Request __attribute__((deprecated))
#else
# define DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Request __declspec(deprecated)
#endif

namespace robocon_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageAnalysis_Request_
{
  using Type = ImageAnalysis_Request_<ContainerAllocator>;

  explicit ImageAnalysis_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->analyze_brightness = false;
      this->detect_motion = false;
    }
  }

  explicit ImageAnalysis_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->analyze_brightness = false;
      this->detect_motion = false;
    }
  }

  // field types and members
  using _analyze_brightness_type =
    bool;
  _analyze_brightness_type analyze_brightness;
  using _detect_motion_type =
    bool;
  _detect_motion_type detect_motion;

  // setters for named parameter idiom
  Type & set__analyze_brightness(
    const bool & _arg)
  {
    this->analyze_brightness = _arg;
    return *this;
  }
  Type & set__detect_motion(
    const bool & _arg)
  {
    this->detect_motion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Request
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Request
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageAnalysis_Request_ & other) const
  {
    if (this->analyze_brightness != other.analyze_brightness) {
      return false;
    }
    if (this->detect_motion != other.detect_motion) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageAnalysis_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageAnalysis_Request_

// alias to use template instance with default allocator
using ImageAnalysis_Request =
  robocon_interfaces::srv::ImageAnalysis_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robocon_interfaces


#ifndef _WIN32
# define DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Response __attribute__((deprecated))
#else
# define DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Response __declspec(deprecated)
#endif

namespace robocon_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageAnalysis_Response_
{
  using Type = ImageAnalysis_Response_<ContainerAllocator>;

  explicit ImageAnalysis_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_brightness = 0.0f;
      this->motion_detected = false;
      this->analysis_result = "";
    }
  }

  explicit ImageAnalysis_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : analysis_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_brightness = 0.0f;
      this->motion_detected = false;
      this->analysis_result = "";
    }
  }

  // field types and members
  using _avg_brightness_type =
    float;
  _avg_brightness_type avg_brightness;
  using _motion_detected_type =
    bool;
  _motion_detected_type motion_detected;
  using _analysis_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _analysis_result_type analysis_result;

  // setters for named parameter idiom
  Type & set__avg_brightness(
    const float & _arg)
  {
    this->avg_brightness = _arg;
    return *this;
  }
  Type & set__motion_detected(
    const bool & _arg)
  {
    this->motion_detected = _arg;
    return *this;
  }
  Type & set__analysis_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->analysis_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Response
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocon_interfaces__srv__ImageAnalysis_Response
    std::shared_ptr<robocon_interfaces::srv::ImageAnalysis_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageAnalysis_Response_ & other) const
  {
    if (this->avg_brightness != other.avg_brightness) {
      return false;
    }
    if (this->motion_detected != other.motion_detected) {
      return false;
    }
    if (this->analysis_result != other.analysis_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageAnalysis_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageAnalysis_Response_

// alias to use template instance with default allocator
using ImageAnalysis_Response =
  robocon_interfaces::srv::ImageAnalysis_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robocon_interfaces

namespace robocon_interfaces
{

namespace srv
{

struct ImageAnalysis
{
  using Request = robocon_interfaces::srv::ImageAnalysis_Request;
  using Response = robocon_interfaces::srv::ImageAnalysis_Response;
};

}  // namespace srv

}  // namespace robocon_interfaces

#endif  // ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_HPP_
