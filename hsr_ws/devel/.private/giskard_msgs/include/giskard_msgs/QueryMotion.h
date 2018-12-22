// Generated by gencpp from file giskard_msgs/QueryMotion.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_QUERYMOTION_H
#define GISKARD_MSGS_MESSAGE_QUERYMOTION_H

#include <ros/service_traits.h>


#include <giskard_msgs/QueryMotionRequest.h>
#include <giskard_msgs/QueryMotionResponse.h>


namespace giskard_msgs
{

struct QueryMotion
{

typedef QueryMotionRequest Request;
typedef QueryMotionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct QueryMotion
} // namespace giskard_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::giskard_msgs::QueryMotion > {
  static const char* value()
  {
    return "bb38ae62c664e4cfff9e4ebb97163477";
  }

  static const char* value(const ::giskard_msgs::QueryMotion&) { return value(); }
};

template<>
struct DataType< ::giskard_msgs::QueryMotion > {
  static const char* value()
  {
    return "giskard_msgs/QueryMotion";
  }

  static const char* value(const ::giskard_msgs::QueryMotion&) { return value(); }
};


// service_traits::MD5Sum< ::giskard_msgs::QueryMotionRequest> should match 
// service_traits::MD5Sum< ::giskard_msgs::QueryMotion > 
template<>
struct MD5Sum< ::giskard_msgs::QueryMotionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::giskard_msgs::QueryMotion >::value();
  }
  static const char* value(const ::giskard_msgs::QueryMotionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::giskard_msgs::QueryMotionRequest> should match 
// service_traits::DataType< ::giskard_msgs::QueryMotion > 
template<>
struct DataType< ::giskard_msgs::QueryMotionRequest>
{
  static const char* value()
  {
    return DataType< ::giskard_msgs::QueryMotion >::value();
  }
  static const char* value(const ::giskard_msgs::QueryMotionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::giskard_msgs::QueryMotionResponse> should match 
// service_traits::MD5Sum< ::giskard_msgs::QueryMotion > 
template<>
struct MD5Sum< ::giskard_msgs::QueryMotionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::giskard_msgs::QueryMotion >::value();
  }
  static const char* value(const ::giskard_msgs::QueryMotionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::giskard_msgs::QueryMotionResponse> should match 
// service_traits::DataType< ::giskard_msgs::QueryMotion > 
template<>
struct DataType< ::giskard_msgs::QueryMotionResponse>
{
  static const char* value()
  {
    return DataType< ::giskard_msgs::QueryMotion >::value();
  }
  static const char* value(const ::giskard_msgs::QueryMotionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_QUERYMOTION_H
