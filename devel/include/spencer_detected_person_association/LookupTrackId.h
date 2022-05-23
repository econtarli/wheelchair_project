// Generated by gencpp from file spencer_detected_person_association/LookupTrackId.msg
// DO NOT EDIT!


#ifndef SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKID_H
#define SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKID_H

#include <ros/service_traits.h>


#include <spencer_detected_person_association/LookupTrackIdRequest.h>
#include <spencer_detected_person_association/LookupTrackIdResponse.h>


namespace spencer_detected_person_association
{

struct LookupTrackId
{

typedef LookupTrackIdRequest Request;
typedef LookupTrackIdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LookupTrackId
} // namespace spencer_detected_person_association


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::spencer_detected_person_association::LookupTrackId > {
  static const char* value()
  {
    return "d6b0b1132d3ddba53683fd3082b74b2a";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackId&) { return value(); }
};

template<>
struct DataType< ::spencer_detected_person_association::LookupTrackId > {
  static const char* value()
  {
    return "spencer_detected_person_association/LookupTrackId";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackId&) { return value(); }
};


// service_traits::MD5Sum< ::spencer_detected_person_association::LookupTrackIdRequest> should match
// service_traits::MD5Sum< ::spencer_detected_person_association::LookupTrackId >
template<>
struct MD5Sum< ::spencer_detected_person_association::LookupTrackIdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::spencer_detected_person_association::LookupTrackId >::value();
  }
  static const char* value(const ::spencer_detected_person_association::LookupTrackIdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::spencer_detected_person_association::LookupTrackIdRequest> should match
// service_traits::DataType< ::spencer_detected_person_association::LookupTrackId >
template<>
struct DataType< ::spencer_detected_person_association::LookupTrackIdRequest>
{
  static const char* value()
  {
    return DataType< ::spencer_detected_person_association::LookupTrackId >::value();
  }
  static const char* value(const ::spencer_detected_person_association::LookupTrackIdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::spencer_detected_person_association::LookupTrackIdResponse> should match
// service_traits::MD5Sum< ::spencer_detected_person_association::LookupTrackId >
template<>
struct MD5Sum< ::spencer_detected_person_association::LookupTrackIdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::spencer_detected_person_association::LookupTrackId >::value();
  }
  static const char* value(const ::spencer_detected_person_association::LookupTrackIdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::spencer_detected_person_association::LookupTrackIdResponse> should match
// service_traits::DataType< ::spencer_detected_person_association::LookupTrackId >
template<>
struct DataType< ::spencer_detected_person_association::LookupTrackIdResponse>
{
  static const char* value()
  {
    return DataType< ::spencer_detected_person_association::LookupTrackId >::value();
  }
  static const char* value(const ::spencer_detected_person_association::LookupTrackIdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKID_H
