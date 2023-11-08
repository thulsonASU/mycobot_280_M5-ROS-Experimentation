// Generated by gencpp from file cobotx_a450_communication/PumpStatus.msg
// DO NOT EDIT!


#ifndef COBOTX_A450_COMMUNICATION_MESSAGE_PUMPSTATUS_H
#define COBOTX_A450_COMMUNICATION_MESSAGE_PUMPSTATUS_H

#include <ros/service_traits.h>


#include <cobotx_a450_communication/PumpStatusRequest.h>
#include <cobotx_a450_communication/PumpStatusResponse.h>


namespace cobotx_a450_communication
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
} // namespace cobotx_a450_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cobotx_a450_communication::PumpStatus > {
  static const char* value()
  {
    return "2a00a95bc76dbf1fced901f3346bdc4a";
  }

  static const char* value(const ::cobotx_a450_communication::PumpStatus&) { return value(); }
};

template<>
struct DataType< ::cobotx_a450_communication::PumpStatus > {
  static const char* value()
  {
    return "cobotx_a450_communication/PumpStatus";
  }

  static const char* value(const ::cobotx_a450_communication::PumpStatus&) { return value(); }
};


// service_traits::MD5Sum< ::cobotx_a450_communication::PumpStatusRequest> should match
// service_traits::MD5Sum< ::cobotx_a450_communication::PumpStatus >
template<>
struct MD5Sum< ::cobotx_a450_communication::PumpStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cobotx_a450_communication::PumpStatus >::value();
  }
  static const char* value(const ::cobotx_a450_communication::PumpStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cobotx_a450_communication::PumpStatusRequest> should match
// service_traits::DataType< ::cobotx_a450_communication::PumpStatus >
template<>
struct DataType< ::cobotx_a450_communication::PumpStatusRequest>
{
  static const char* value()
  {
    return DataType< ::cobotx_a450_communication::PumpStatus >::value();
  }
  static const char* value(const ::cobotx_a450_communication::PumpStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cobotx_a450_communication::PumpStatusResponse> should match
// service_traits::MD5Sum< ::cobotx_a450_communication::PumpStatus >
template<>
struct MD5Sum< ::cobotx_a450_communication::PumpStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cobotx_a450_communication::PumpStatus >::value();
  }
  static const char* value(const ::cobotx_a450_communication::PumpStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cobotx_a450_communication::PumpStatusResponse> should match
// service_traits::DataType< ::cobotx_a450_communication::PumpStatus >
template<>
struct DataType< ::cobotx_a450_communication::PumpStatusResponse>
{
  static const char* value()
  {
    return DataType< ::cobotx_a450_communication::PumpStatus >::value();
  }
  static const char* value(const ::cobotx_a450_communication::PumpStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COBOTX_A450_COMMUNICATION_MESSAGE_PUMPSTATUS_H
