// Generated by gencpp from file ultraarm_communication/GetAnglesRequest.msg
// DO NOT EDIT!


#ifndef ULTRAARM_COMMUNICATION_MESSAGE_GETANGLESREQUEST_H
#define ULTRAARM_COMMUNICATION_MESSAGE_GETANGLESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ultraarm_communication
{
template <class ContainerAllocator>
struct GetAnglesRequest_
{
  typedef GetAnglesRequest_<ContainerAllocator> Type;

  GetAnglesRequest_()
    {
    }
  GetAnglesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetAnglesRequest_

typedef ::ultraarm_communication::GetAnglesRequest_<std::allocator<void> > GetAnglesRequest;

typedef boost::shared_ptr< ::ultraarm_communication::GetAnglesRequest > GetAnglesRequestPtr;
typedef boost::shared_ptr< ::ultraarm_communication::GetAnglesRequest const> GetAnglesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ultraarm_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ultraarm_communication/GetAnglesRequest";
  }

  static const char* value(const ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAnglesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ultraarm_communication::GetAnglesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ULTRAARM_COMMUNICATION_MESSAGE_GETANGLESREQUEST_H
