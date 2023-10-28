// Generated by gencpp from file mypalletizer_communication/MypalSetCoords.msg
// DO NOT EDIT!


#ifndef MYPALLETIZER_COMMUNICATION_MESSAGE_MYPALSETCOORDS_H
#define MYPALLETIZER_COMMUNICATION_MESSAGE_MYPALSETCOORDS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mypalletizer_communication
{
template <class ContainerAllocator>
struct MypalSetCoords_
{
  typedef MypalSetCoords_<ContainerAllocator> Type;

  MypalSetCoords_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , speed(0)
    , model(0)  {
    }
  MypalSetCoords_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , speed(0)
    , model(0)  {
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

   typedef int8_t _speed_type;
  _speed_type speed;

   typedef int8_t _model_type;
  _model_type model;





  typedef boost::shared_ptr< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> const> ConstPtr;

}; // struct MypalSetCoords_

typedef ::mypalletizer_communication::MypalSetCoords_<std::allocator<void> > MypalSetCoords;

typedef boost::shared_ptr< ::mypalletizer_communication::MypalSetCoords > MypalSetCoordsPtr;
typedef boost::shared_ptr< ::mypalletizer_communication::MypalSetCoords const> MypalSetCoordsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator1> & lhs, const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.rx == rhs.rx &&
    lhs.speed == rhs.speed &&
    lhs.model == rhs.model;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator1> & lhs, const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mypalletizer_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c041c1c42bb51017eea718d03b362e52";
  }

  static const char* value(const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc041c1c42bb51017ULL;
  static const uint64_t static_value2 = 0xeea718d03b362e52ULL;
};

template<class ContainerAllocator>
struct DataType< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mypalletizer_communication/MypalSetCoords";
  }

  static const char* value(const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 rx\n"
"# float32 ry\n"
"# float32 rz\n"
"\n"
"int8 speed\n"
"int8 model\n"
;
  }

  static const char* value(const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.rx);
      stream.next(m.speed);
      stream.next(m.model);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MypalSetCoords_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mypalletizer_communication::MypalSetCoords_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "rx: ";
    Printer<float>::stream(s, indent + "  ", v.rx);
    s << indent << "speed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.speed);
    s << indent << "model: ";
    Printer<int8_t>::stream(s, indent + "  ", v.model);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYPALLETIZER_COMMUNICATION_MESSAGE_MYPALSETCOORDS_H
