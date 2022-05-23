// Generated by gencpp from file rwth_perception_people_msgs/PedestrianLocations.msg
// DO NOT EDIT!


#ifndef RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_PEDESTRIANLOCATIONS_H
#define RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_PEDESTRIANLOCATIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace rwth_perception_people_msgs
{
template <class ContainerAllocator>
struct PedestrianLocations_
{
  typedef PedestrianLocations_<ContainerAllocator> Type;

  PedestrianLocations_()
    : header()
    , ids()
    , poses()
    , distances()
    , angles()
    , min_distance(0.0)
    , min_distance_angle(0.0)  {
    }
  PedestrianLocations_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ids(_alloc)
    , poses(_alloc)
    , distances(_alloc)
    , angles(_alloc)
    , min_distance(0.0)
    , min_distance_angle(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _ids_type;
  _ids_type ids;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _distances_type;
  _distances_type distances;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _angles_type;
  _angles_type angles;

   typedef double _min_distance_type;
  _min_distance_type min_distance;

   typedef double _min_distance_angle_type;
  _min_distance_angle_type min_distance_angle;





  typedef boost::shared_ptr< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> const> ConstPtr;

}; // struct PedestrianLocations_

typedef ::rwth_perception_people_msgs::PedestrianLocations_<std::allocator<void> > PedestrianLocations;

typedef boost::shared_ptr< ::rwth_perception_people_msgs::PedestrianLocations > PedestrianLocationsPtr;
typedef boost::shared_ptr< ::rwth_perception_people_msgs::PedestrianLocations const> PedestrianLocationsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator1> & lhs, const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ids == rhs.ids &&
    lhs.poses == rhs.poses &&
    lhs.distances == rhs.distances &&
    lhs.angles == rhs.angles &&
    lhs.min_distance == rhs.min_distance &&
    lhs.min_distance_angle == rhs.min_distance_angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator1> & lhs, const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rwth_perception_people_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f1ff45be31c79c3b674556d26791dcd";
  }

  static const char* value(const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f1ff45be31c79c3ULL;
  static const uint64_t static_value2 = 0xb674556d26791dcdULL;
};

template<class ContainerAllocator>
struct DataType< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rwth_perception_people_msgs/PedestrianLocations";
  }

  static const char* value(const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"int32[] ids\n"
"geometry_msgs/Pose[] poses\n"
"float64[] distances\n"
"float64[] angles\n"
"float64 min_distance\n"
"float64 min_distance_angle\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ids);
      stream.next(m.poses);
      stream.next(m.distances);
      stream.next(m.angles);
      stream.next(m.min_distance);
      stream.next(m.min_distance_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PedestrianLocations_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rwth_perception_people_msgs::PedestrianLocations_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ids[]" << std::endl;
    for (size_t i = 0; i < v.ids.size(); ++i)
    {
      s << indent << "  ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.ids[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
    s << indent << "distances[]" << std::endl;
    for (size_t i = 0; i < v.distances.size(); ++i)
    {
      s << indent << "  distances[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.distances[i]);
    }
    s << indent << "angles[]" << std::endl;
    for (size_t i = 0; i < v.angles.size(); ++i)
    {
      s << indent << "  angles[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.angles[i]);
    }
    s << indent << "min_distance: ";
    Printer<double>::stream(s, indent + "  ", v.min_distance);
    s << indent << "min_distance_angle: ";
    Printer<double>::stream(s, indent + "  ", v.min_distance_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_PEDESTRIANLOCATIONS_H
