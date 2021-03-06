// Generated by gencpp from file roboteq_diff_msgs/Duplex.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_DIFF_MSGS_MESSAGE_DUPLEX_H
#define ROBOTEQ_DIFF_MSGS_MESSAGE_DUPLEX_H


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
struct Duplex_
{
  typedef Duplex_<ContainerAllocator> Type;

  Duplex_()
    : a(0.0)
    , b(0.0)  {
    }
  Duplex_(const ContainerAllocator& _alloc)
    : a(0.0)
    , b(0.0)  {
  (void)_alloc;
    }



   typedef float _a_type;
  _a_type a;

   typedef float _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> const> ConstPtr;

}; // struct Duplex_

typedef ::roboteq_diff_msgs::Duplex_<std::allocator<void> > Duplex;

typedef boost::shared_ptr< ::roboteq_diff_msgs::Duplex > DuplexPtr;
typedef boost::shared_ptr< ::roboteq_diff_msgs::Duplex const> DuplexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_diff_msgs::Duplex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::roboteq_diff_msgs::Duplex_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::Duplex_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::roboteq_diff_msgs::Duplex_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::Duplex_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace roboteq_diff_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f6326d24b4937f854196fd3a843f42e";
  }

  static const char* value(const ::roboteq_diff_msgs::Duplex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f6326d24b4937f8ULL;
  static const uint64_t static_value2 = 0x54196fd3a843f42eULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_diff_msgs/Duplex";
  }

  static const char* value(const ::roboteq_diff_msgs::Duplex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 a\n"
"float32 b\n"
;
  }

  static const char* value(const ::roboteq_diff_msgs::Duplex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Duplex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_diff_msgs::Duplex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_diff_msgs::Duplex_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<float>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<float>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_DIFF_MSGS_MESSAGE_DUPLEX_H
