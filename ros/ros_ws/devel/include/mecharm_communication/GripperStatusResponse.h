// Generated by gencpp from file mecharm_communication/GripperStatusResponse.msg
// DO NOT EDIT!


#ifndef MECHARM_COMMUNICATION_MESSAGE_GRIPPERSTATUSRESPONSE_H
#define MECHARM_COMMUNICATION_MESSAGE_GRIPPERSTATUSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mecharm_communication
{
template <class ContainerAllocator>
struct GripperStatusResponse_
{
  typedef GripperStatusResponse_<ContainerAllocator> Type;

  GripperStatusResponse_()
    : Flag(false)  {
    }
  GripperStatusResponse_(const ContainerAllocator& _alloc)
    : Flag(false)  {
  (void)_alloc;
    }



   typedef uint8_t _Flag_type;
  _Flag_type Flag;





  typedef boost::shared_ptr< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GripperStatusResponse_

typedef ::mecharm_communication::GripperStatusResponse_<std::allocator<void> > GripperStatusResponse;

typedef boost::shared_ptr< ::mecharm_communication::GripperStatusResponse > GripperStatusResponsePtr;
typedef boost::shared_ptr< ::mecharm_communication::GripperStatusResponse const> GripperStatusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator1> & lhs, const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.Flag == rhs.Flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator1> & lhs, const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mecharm_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93920b0393d28a43d7b512501bb09272";
  }

  static const char* value(const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93920b0393d28a43ULL;
  static const uint64_t static_value2 = 0xd7b512501bb09272ULL;
};

template<class ContainerAllocator>
struct DataType< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mecharm_communication/GripperStatusResponse";
  }

  static const char* value(const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool Flag\n"
;
  }

  static const char* value(const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperStatusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mecharm_communication::GripperStatusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mecharm_communication::GripperStatusResponse_<ContainerAllocator>& v)
  {
    s << indent << "Flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MECHARM_COMMUNICATION_MESSAGE_GRIPPERSTATUSRESPONSE_H