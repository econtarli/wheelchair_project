// Generated by gencpp from file spencer_detected_person_association/LookupTrackIdRequest.msg
// DO NOT EDIT!


#ifndef SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDREQUEST_H
#define SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_detected_person_association
{
template <class ContainerAllocator>
struct LookupTrackIdRequest_
{
  typedef LookupTrackIdRequest_<ContainerAllocator> Type;

  LookupTrackIdRequest_()
    : detection_id(0)  {
    }
  LookupTrackIdRequest_(const ContainerAllocator& _alloc)
    : detection_id(0)  {
  (void)_alloc;
    }



   typedef uint64_t _detection_id_type;
  _detection_id_type detection_id;





  typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LookupTrackIdRequest_

typedef ::spencer_detected_person_association::LookupTrackIdRequest_<std::allocator<void> > LookupTrackIdRequest;

typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdRequest > LookupTrackIdRequestPtr;
typedef boost::shared_ptr< ::spencer_detected_person_association::LookupTrackIdRequest const> LookupTrackIdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator1> & lhs, const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.detection_id == rhs.detection_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator1> & lhs, const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spencer_detected_person_association

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "429b45ef0055eafe06921700b8c599ba";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x429b45ef0055eafeULL;
  static const uint64_t static_value2 = 0x06921700b8c599baULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_detected_person_association/LookupTrackIdRequest";
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64      detection_id        # ID of a detected person\n"
;
  }

  static const char* value(const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detection_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LookupTrackIdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_detected_person_association::LookupTrackIdRequest_<ContainerAllocator>& v)
  {
    s << indent << "detection_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.detection_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_DETECTED_PERSON_ASSOCIATION_MESSAGE_LOOKUPTRACKIDREQUEST_H
