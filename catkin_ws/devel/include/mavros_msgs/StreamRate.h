// Generated by gencpp from file mavros_msgs/StreamRate.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_STREAMRATE_H
#define MAVROS_MSGS_MESSAGE_STREAMRATE_H

#include <ros/service_traits.h>


#include <mavros_msgs/StreamRateRequest.h>
#include <mavros_msgs/StreamRateResponse.h>


namespace mavros_msgs
{

struct StreamRate
{

typedef StreamRateRequest Request;
typedef StreamRateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StreamRate
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::StreamRate > {
  static const char* value()
  {
    return "d12f7661724c8ba25f67ba597bb7d039";
  }

  static const char* value(const ::mavros_msgs::StreamRate&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::StreamRate > {
  static const char* value()
  {
    return "mavros_msgs/StreamRate";
  }

  static const char* value(const ::mavros_msgs::StreamRate&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::StreamRateRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::StreamRate > 
template<>
struct MD5Sum< ::mavros_msgs::StreamRateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::StreamRate >::value();
  }
  static const char* value(const ::mavros_msgs::StreamRateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::StreamRateRequest> should match 
// service_traits::DataType< ::mavros_msgs::StreamRate > 
template<>
struct DataType< ::mavros_msgs::StreamRateRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::StreamRate >::value();
  }
  static const char* value(const ::mavros_msgs::StreamRateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::StreamRateResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::StreamRate > 
template<>
struct MD5Sum< ::mavros_msgs::StreamRateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::StreamRate >::value();
  }
  static const char* value(const ::mavros_msgs::StreamRateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::StreamRateResponse> should match 
// service_traits::DataType< ::mavros_msgs::StreamRate > 
template<>
struct DataType< ::mavros_msgs::StreamRateResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::StreamRate >::value();
  }
  static const char* value(const ::mavros_msgs::StreamRateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_STREAMRATE_H
