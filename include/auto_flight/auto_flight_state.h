// Generated by gencpp from file auto_flight/auto_flight_state.msg
// DO NOT EDIT!


#ifndef AUTO_FLIGHT_MESSAGE_AUTO_FLIGHT_STATE_H
#define AUTO_FLIGHT_MESSAGE_AUTO_FLIGHT_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>

namespace auto_flight
{
template <class ContainerAllocator>
struct auto_flight_state_
{
  typedef auto_flight_state_<ContainerAllocator> Type;

  auto_flight_state_()
    : header()
    , traj_point_distance(0.0)
    , closest_traj_point_distance(0.0)
    , last_traj(0)
    , if_replan(false)
    , current_traj(0)
    , way_point_i(0)
    , way_point()
    , plan_fly_yaw(0.0)
    , current_pose()
    , true_fly_yaw(0.0)
    , current_point_distance(0.0)
    , closest_current_point_distance(0.0)  {
    }
  auto_flight_state_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , traj_point_distance(0.0)
    , closest_traj_point_distance(0.0)
    , last_traj(0)
    , if_replan(false)
    , current_traj(0)
    , way_point_i(0)
    , way_point(_alloc)
    , plan_fly_yaw(0.0)
    , current_pose(_alloc)
    , true_fly_yaw(0.0)
    , current_point_distance(0.0)
    , closest_current_point_distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _traj_point_distance_type;
  _traj_point_distance_type traj_point_distance;

   typedef double _closest_traj_point_distance_type;
  _closest_traj_point_distance_type closest_traj_point_distance;

   typedef int32_t _last_traj_type;
  _last_traj_type last_traj;

   typedef uint8_t _if_replan_type;
  _if_replan_type if_replan;

   typedef int32_t _current_traj_type;
  _current_traj_type current_traj;

   typedef int32_t _way_point_i_type;
  _way_point_i_type way_point_i;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _way_point_type;
  _way_point_type way_point;

   typedef double _plan_fly_yaw_type;
  _plan_fly_yaw_type plan_fly_yaw;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _current_pose_type;
  _current_pose_type current_pose;

   typedef double _true_fly_yaw_type;
  _true_fly_yaw_type true_fly_yaw;

   typedef double _current_point_distance_type;
  _current_point_distance_type current_point_distance;

   typedef double _closest_current_point_distance_type;
  _closest_current_point_distance_type closest_current_point_distance;





  typedef boost::shared_ptr< ::auto_flight::auto_flight_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auto_flight::auto_flight_state_<ContainerAllocator> const> ConstPtr;

}; // struct auto_flight_state_

typedef ::auto_flight::auto_flight_state_<std::allocator<void> > auto_flight_state;

typedef boost::shared_ptr< ::auto_flight::auto_flight_state > auto_flight_statePtr;
typedef boost::shared_ptr< ::auto_flight::auto_flight_state const> auto_flight_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::auto_flight::auto_flight_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::auto_flight::auto_flight_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace auto_flight

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'auto_flight': ['/home/wuqi/code/ros/auto_flight_ros/src/auto_flight/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::auto_flight::auto_flight_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::auto_flight::auto_flight_state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::auto_flight::auto_flight_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::auto_flight::auto_flight_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::auto_flight::auto_flight_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::auto_flight::auto_flight_state_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::auto_flight::auto_flight_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02e2b4130e5fe98f6183e956720ecaec";
  }

  static const char* value(const ::auto_flight::auto_flight_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02e2b4130e5fe98fULL;
  static const uint64_t static_value2 = 0x6183e956720ecaecULL;
};

template<class ContainerAllocator>
struct DataType< ::auto_flight::auto_flight_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "auto_flight/auto_flight_state";
  }

  static const char* value(const ::auto_flight::auto_flight_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::auto_flight::auto_flight_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#auto_flight_state\n\
\n\
std_msgs/Header header\n\
float64 traj_point_distance\n\
float64 closest_traj_point_distance\n\
int32 last_traj\n\
bool if_replan\n\
int32 current_traj\n\
int32 way_point_i\n\
geometry_msgs/PoseStamped way_point\n\
float64 plan_fly_yaw\n\
geometry_msgs/PoseStamped current_pose\n\
float64 true_fly_yaw\n\
float64 current_point_distance\n\
float64 closest_current_point_distance\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::auto_flight::auto_flight_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::auto_flight::auto_flight_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.traj_point_distance);
      stream.next(m.closest_traj_point_distance);
      stream.next(m.last_traj);
      stream.next(m.if_replan);
      stream.next(m.current_traj);
      stream.next(m.way_point_i);
      stream.next(m.way_point);
      stream.next(m.plan_fly_yaw);
      stream.next(m.current_pose);
      stream.next(m.true_fly_yaw);
      stream.next(m.current_point_distance);
      stream.next(m.closest_current_point_distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct auto_flight_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::auto_flight::auto_flight_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::auto_flight::auto_flight_state_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "traj_point_distance: ";
    Printer<double>::stream(s, indent + "  ", v.traj_point_distance);
    s << indent << "closest_traj_point_distance: ";
    Printer<double>::stream(s, indent + "  ", v.closest_traj_point_distance);
    s << indent << "last_traj: ";
    Printer<int32_t>::stream(s, indent + "  ", v.last_traj);
    s << indent << "if_replan: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.if_replan);
    s << indent << "current_traj: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current_traj);
    s << indent << "way_point_i: ";
    Printer<int32_t>::stream(s, indent + "  ", v.way_point_i);
    s << indent << "way_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.way_point);
    s << indent << "plan_fly_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.plan_fly_yaw);
    s << indent << "current_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.current_pose);
    s << indent << "true_fly_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.true_fly_yaw);
    s << indent << "current_point_distance: ";
    Printer<double>::stream(s, indent + "  ", v.current_point_distance);
    s << indent << "closest_current_point_distance: ";
    Printer<double>::stream(s, indent + "  ", v.closest_current_point_distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTO_FLIGHT_MESSAGE_AUTO_FLIGHT_STATE_H