// Generated by gencpp from file roboteq_diff_msgs/RequestParamRequest.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_DIFF_MSGS_MESSAGE_REQUESTPARAMREQUEST_H
#define ROBOTEQ_DIFF_MSGS_MESSAGE_REQUESTPARAMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboteq_diff_msgs
{
template <class ContainerAllocator>
struct RequestParamRequest_
{
  typedef RequestParamRequest_<ContainerAllocator> Type;

  RequestParamRequest_()
    : name()  {
    }
  RequestParamRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RequestParamRequest_

typedef ::roboteq_diff_msgs::RequestParamRequest_<std::allocator<void> > RequestParamRequest;

typedef boost::shared_ptr< ::roboteq_diff_msgs::RequestParamRequest > RequestParamRequestPtr;
typedef boost::shared_ptr< ::roboteq_diff_msgs::RequestParamRequest const> RequestParamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace roboteq_diff_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_diff_msgs/RequestParamRequest";
  }

  static const char* value(const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"\n"
;
  }

  static const char* value(const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestParamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_diff_msgs::RequestParamRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_DIFF_MSGS_MESSAGE_REQUESTPARAMREQUEST_H