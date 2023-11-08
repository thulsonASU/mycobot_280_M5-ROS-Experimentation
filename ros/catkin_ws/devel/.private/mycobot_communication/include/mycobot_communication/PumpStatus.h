// Generated by gencpp from file mycobot_communication/PumpStatus.msg
// DO NOT EDIT!


#ifndef MYCOBOT_COMMUNICATION_MESSAGE_PUMPSTATUS_H
#define MYCOBOT_COMMUNICATION_MESSAGE_PUMPSTATUS_H

#include <ros/service_traits.h>


#include <mycobot_communication/PumpStatusRequest.h>
#include <mycobot_communication/PumpStatusResponse.h>


namespace mycobot_communication
{

struct PumpStatus
{

typedef PumpStatusRequest Request;
typedef PumpStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PumpStatus
} // namespace mycobot_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mycobot_communication::PumpStatus > {
  static const char* value()
  {
    return "2a00a95bc76dbf1fced901f3346bdc4a";
  }

  static const char* value(const ::mycobot_communication::PumpStatus&) { return value(); }
};

template<>
struct DataType< ::mycobot_communication::PumpStatus > {
  static const char* value()
  {
    return "mycobot_communication/PumpStatus";
  }

  static const char* value(const ::mycobot_communication::PumpStatus&) { return value(); }
};


// service_traits::MD5Sum< ::mycobot_communication::PumpStatusRequest> should match
// service_traits::MD5Sum< ::mycobot_communication::PumpStatus >
template<>
struct MD5Sum< ::mycobot_communication::PumpStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mycobot_communication::PumpStatus >::value();
  }
  static const char* value(const ::mycobot_communication::PumpStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mycobot_communication::PumpStatusRequest> should match
// service_traits::DataType< ::mycobot_communication::PumpStatus >
template<>
struct DataType< ::mycobot_communication::PumpStatusRequest>
{
  static const char* value()
  {
    return DataType< ::mycobot_communication::PumpStatus >::value();
  }
  static const char* value(const ::mycobot_communication::PumpStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mycobot_communication::PumpStatusResponse> should match
// service_traits::MD5Sum< ::mycobot_communication::PumpStatus >
template<>
struct MD5Sum< ::mycobot_communication::PumpStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mycobot_communication::PumpStatus >::value();
  }
  static const char* value(const ::mycobot_communication::PumpStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mycobot_communication::PumpStatusResponse> should match
// service_traits::DataType< ::mycobot_communication::PumpStatus >
template<>
struct DataType< ::mycobot_communication::PumpStatusResponse>
{
  static const char* value()
  {
    return DataType< ::mycobot_communication::PumpStatus >::value();
  }
  static const char* value(const ::mycobot_communication::PumpStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MYCOBOT_COMMUNICATION_MESSAGE_PUMPSTATUS_H
