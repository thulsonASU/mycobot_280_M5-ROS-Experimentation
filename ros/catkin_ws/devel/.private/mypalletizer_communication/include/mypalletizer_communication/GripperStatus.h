// Generated by gencpp from file mypalletizer_communication/GripperStatus.msg
// DO NOT EDIT!


#ifndef MYPALLETIZER_COMMUNICATION_MESSAGE_GRIPPERSTATUS_H
#define MYPALLETIZER_COMMUNICATION_MESSAGE_GRIPPERSTATUS_H

#include <ros/service_traits.h>


#include <mypalletizer_communication/GripperStatusRequest.h>
#include <mypalletizer_communication/GripperStatusResponse.h>


namespace mypalletizer_communication
{

struct GripperStatus
{

typedef GripperStatusRequest Request;
typedef GripperStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GripperStatus
} // namespace mypalletizer_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mypalletizer_communication::GripperStatus > {
  static const char* value()
  {
    return "c57caedf4aafd0b59704d2f3b16e0f35";
  }

  static const char* value(const ::mypalletizer_communication::GripperStatus&) { return value(); }
};

template<>
struct DataType< ::mypalletizer_communication::GripperStatus > {
  static const char* value()
  {
    return "mypalletizer_communication/GripperStatus";
  }

  static const char* value(const ::mypalletizer_communication::GripperStatus&) { return value(); }
};


// service_traits::MD5Sum< ::mypalletizer_communication::GripperStatusRequest> should match
// service_traits::MD5Sum< ::mypalletizer_communication::GripperStatus >
template<>
struct MD5Sum< ::mypalletizer_communication::GripperStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mypalletizer_communication::GripperStatus >::value();
  }
  static const char* value(const ::mypalletizer_communication::GripperStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mypalletizer_communication::GripperStatusRequest> should match
// service_traits::DataType< ::mypalletizer_communication::GripperStatus >
template<>
struct DataType< ::mypalletizer_communication::GripperStatusRequest>
{
  static const char* value()
  {
    return DataType< ::mypalletizer_communication::GripperStatus >::value();
  }
  static const char* value(const ::mypalletizer_communication::GripperStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mypalletizer_communication::GripperStatusResponse> should match
// service_traits::MD5Sum< ::mypalletizer_communication::GripperStatus >
template<>
struct MD5Sum< ::mypalletizer_communication::GripperStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mypalletizer_communication::GripperStatus >::value();
  }
  static const char* value(const ::mypalletizer_communication::GripperStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mypalletizer_communication::GripperStatusResponse> should match
// service_traits::DataType< ::mypalletizer_communication::GripperStatus >
template<>
struct DataType< ::mypalletizer_communication::GripperStatusResponse>
{
  static const char* value()
  {
    return DataType< ::mypalletizer_communication::GripperStatus >::value();
  }
  static const char* value(const ::mypalletizer_communication::GripperStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MYPALLETIZER_COMMUNICATION_MESSAGE_GRIPPERSTATUS_H
