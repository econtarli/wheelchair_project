// Generated by gencpp from file wheelchair_navigation/ModeChange.msg
// DO NOT EDIT!


#ifndef WHEELCHAIR_NAVIGATION_MESSAGE_MODECHANGE_H
#define WHEELCHAIR_NAVIGATION_MESSAGE_MODECHANGE_H

#include <ros/service_traits.h>


#include <wheelchair_navigation/ModeChangeRequest.h>
#include <wheelchair_navigation/ModeChangeResponse.h>


namespace wheelchair_navigation
{

struct ModeChange
{

typedef ModeChangeRequest Request;
typedef ModeChangeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ModeChange
} // namespace wheelchair_navigation


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wheelchair_navigation::ModeChange > {
  static const char* value()
  {
    return "0f51d18db31d34dd090e9cebf530d121";
  }

  static const char* value(const ::wheelchair_navigation::ModeChange&) { return value(); }
};

template<>
struct DataType< ::wheelchair_navigation::ModeChange > {
  static const char* value()
  {
    return "wheelchair_navigation/ModeChange";
  }

  static const char* value(const ::wheelchair_navigation::ModeChange&) { return value(); }
};


// service_traits::MD5Sum< ::wheelchair_navigation::ModeChangeRequest> should match
// service_traits::MD5Sum< ::wheelchair_navigation::ModeChange >
template<>
struct MD5Sum< ::wheelchair_navigation::ModeChangeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wheelchair_navigation::ModeChange >::value();
  }
  static const char* value(const ::wheelchair_navigation::ModeChangeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wheelchair_navigation::ModeChangeRequest> should match
// service_traits::DataType< ::wheelchair_navigation::ModeChange >
template<>
struct DataType< ::wheelchair_navigation::ModeChangeRequest>
{
  static const char* value()
  {
    return DataType< ::wheelchair_navigation::ModeChange >::value();
  }
  static const char* value(const ::wheelchair_navigation::ModeChangeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wheelchair_navigation::ModeChangeResponse> should match
// service_traits::MD5Sum< ::wheelchair_navigation::ModeChange >
template<>
struct MD5Sum< ::wheelchair_navigation::ModeChangeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wheelchair_navigation::ModeChange >::value();
  }
  static const char* value(const ::wheelchair_navigation::ModeChangeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wheelchair_navigation::ModeChangeResponse> should match
// service_traits::DataType< ::wheelchair_navigation::ModeChange >
template<>
struct DataType< ::wheelchair_navigation::ModeChangeResponse>
{
  static const char* value()
  {
    return DataType< ::wheelchair_navigation::ModeChange >::value();
  }
  static const char* value(const ::wheelchair_navigation::ModeChangeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WHEELCHAIR_NAVIGATION_MESSAGE_MODECHANGE_H
