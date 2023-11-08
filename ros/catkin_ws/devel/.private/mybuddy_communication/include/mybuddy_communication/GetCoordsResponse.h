// Generated by gencpp from file mybuddy_communication/GetCoordsResponse.msg
// DO NOT EDIT!


#ifndef MYBUDDY_COMMUNICATION_MESSAGE_GETCOORDSRESPONSE_H
#define MYBUDDY_COMMUNICATION_MESSAGE_GETCOORDSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mybuddy_communication
{
template <class ContainerAllocator>
struct GetCoordsResponse_
{
  typedef GetCoordsResponse_<ContainerAllocator> Type;

  GetCoordsResponse_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , ry(0.0)
    , rz(0.0)  {
    }
  GetCoordsResponse_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , ry(0.0)
    , rz(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _rx_type;
  _rx_type rx;

   typedef float _ry_type;
  _ry_type ry;

   typedef float _rz_type;
  _rz_type rz;





  typedef boost::shared_ptr< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCoordsResponse_

typedef ::mybuddy_communication::GetCoordsResponse_<std::allocator<void> > GetCoordsResponse;

typedef boost::shared_ptr< ::mybuddy_communication::GetCoordsResponse > GetCoordsResponsePtr;
typedef boost::shared_ptr< ::mybuddy_communication::GetCoordsResponse const> GetCoordsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator1> & lhs, const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.rx == rhs.rx &&
    lhs.ry == rhs.ry &&
    lhs.rz == rhs.rz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator1> & lhs, const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mybuddy_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "740a0696f94797c91679d50dca7e75ad";
  }

  static const char* value(const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x740a0696f94797c9ULL;
  static const uint64_t static_value2 = 0x1679d50dca7e75adULL;
};

template<class ContainerAllocator>
struct DataType< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mybuddy_communication/GetCoordsResponse";
  }

  static const char* value(const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 rx\n"
"float32 ry\n"
"float32 rz\n"
;
  }

  static const char* value(const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.rx);
      stream.next(m.ry);
      stream.next(m.rz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCoordsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mybuddy_communication::GetCoordsResponse_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "rx: ";
    Printer<float>::stream(s, indent + "  ", v.rx);
    s << indent << "ry: ";
    Printer<float>::stream(s, indent + "  ", v.ry);
    s << indent << "rz: ";
    Printer<float>::stream(s, indent + "  ", v.rz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYBUDDY_COMMUNICATION_MESSAGE_GETCOORDSRESPONSE_H
