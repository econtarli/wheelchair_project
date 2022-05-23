// Generated by gencpp from file rwth_perception_people_msgs/UpperBodyDetector.msg
// DO NOT EDIT!


#ifndef RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_UPPERBODYDETECTOR_H
#define RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_UPPERBODYDETECTOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rwth_perception_people_msgs
{
template <class ContainerAllocator>
struct UpperBodyDetector_
{
  typedef UpperBodyDetector_<ContainerAllocator> Type;

  UpperBodyDetector_()
    : header()
    , pos_x()
    , pos_y()
    , width()
    , height()
    , dist()
    , median_depth()  {
    }
  UpperBodyDetector_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pos_x(_alloc)
    , pos_y(_alloc)
    , width(_alloc)
    , height(_alloc)
    , dist(_alloc)
    , median_depth(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _pos_x_type;
  _pos_x_type pos_x;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _pos_y_type;
  _pos_y_type pos_y;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _width_type;
  _width_type width;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _height_type;
  _height_type height;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dist_type;
  _dist_type dist;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _median_depth_type;
  _median_depth_type median_depth;





  typedef boost::shared_ptr< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> const> ConstPtr;

}; // struct UpperBodyDetector_

typedef ::rwth_perception_people_msgs::UpperBodyDetector_<std::allocator<void> > UpperBodyDetector;

typedef boost::shared_ptr< ::rwth_perception_people_msgs::UpperBodyDetector > UpperBodyDetectorPtr;
typedef boost::shared_ptr< ::rwth_perception_people_msgs::UpperBodyDetector const> UpperBodyDetectorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator1> & lhs, const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pos_x == rhs.pos_x &&
    lhs.pos_y == rhs.pos_y &&
    lhs.width == rhs.width &&
    lhs.height == rhs.height &&
    lhs.dist == rhs.dist &&
    lhs.median_depth == rhs.median_depth;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator1> & lhs, const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rwth_perception_people_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1565008f1da6caedd235c0aedddd12ad";
  }

  static const char* value(const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1565008f1da6caedULL;
  static const uint64_t static_value2 = 0xd235c0aedddd12adULL;
};

template<class ContainerAllocator>
struct DataType< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rwth_perception_people_msgs/UpperBodyDetector";
  }

  static const char* value(const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int64[] pos_x 	# upper left x corner of the bounding box\n"
"int64[] pos_y 	# upper left y corner of the bounding box\n"
"int64[] width 	# width of the bounding box\n"
"int64[] height 	# height of the bounding box\n"
"float64[] dist  # distance of the overlaid area and the template\n"
"float64[] median_depth # median_depth inside the detected bounding box\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.dist);
      stream.next(m.median_depth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpperBodyDetector_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rwth_perception_people_msgs::UpperBodyDetector_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos_x[]" << std::endl;
    for (size_t i = 0; i < v.pos_x.size(); ++i)
    {
      s << indent << "  pos_x[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.pos_x[i]);
    }
    s << indent << "pos_y[]" << std::endl;
    for (size_t i = 0; i < v.pos_y.size(); ++i)
    {
      s << indent << "  pos_y[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.pos_y[i]);
    }
    s << indent << "width[]" << std::endl;
    for (size_t i = 0; i < v.width.size(); ++i)
    {
      s << indent << "  width[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.width[i]);
    }
    s << indent << "height[]" << std::endl;
    for (size_t i = 0; i < v.height.size(); ++i)
    {
      s << indent << "  height[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.height[i]);
    }
    s << indent << "dist[]" << std::endl;
    for (size_t i = 0; i < v.dist.size(); ++i)
    {
      s << indent << "  dist[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dist[i]);
    }
    s << indent << "median_depth[]" << std::endl;
    for (size_t i = 0; i < v.median_depth.size(); ++i)
    {
      s << indent << "  median_depth[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.median_depth[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_UPPERBODYDETECTOR_H