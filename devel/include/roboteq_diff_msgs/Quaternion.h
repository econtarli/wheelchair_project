// Generated by gencpp from file roboteq_diff_msgs/Quaternion.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_DIFF_MSGS_MESSAGE_QUATERNION_H
#define ROBOTEQ_DIFF_MSGS_MESSAGE_QUATERNION_H


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
struct Quaternion_
{
  typedef Quaternion_<ContainerAllocator> Type;

  Quaternion_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , w(0.0)  {
    }
  Quaternion_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , w(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _w_type;
  _w_type w;





  typedef boost::shared_ptr< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> const> ConstPtr;

}; // struct Quaternion_

typedef ::roboteq_diff_msgs::Quaternion_<std::allocator<void> > Quaternion;

typedef boost::shared_ptr< ::roboteq_diff_msgs::Quaternion > QuaternionPtr;
typedef boost::shared_ptr< ::roboteq_diff_msgs::Quaternion const> QuaternionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.w == rhs.w;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator1> & lhs, const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace roboteq_diff_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c3a70de85a9dd451c31fa86cab10a939";
  }

  static const char* value(const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc3a70de85a9dd451ULL;
  static const uint64_t static_value2 = 0xc31fa86cab10a939ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_diff_msgs/Quaternion";
  }

  static const char* value(const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 w\n"
;
  }

  static const char* value(const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.w);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Quaternion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_diff_msgs::Quaternion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_diff_msgs::Quaternion_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "w: ";
    Printer<float>::stream(s, indent + "  ", v.w);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_DIFF_MSGS_MESSAGE_QUATERNION_H
