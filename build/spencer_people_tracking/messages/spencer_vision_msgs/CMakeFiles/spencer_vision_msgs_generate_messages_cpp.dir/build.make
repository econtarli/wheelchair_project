# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/umut/wheelchair_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/umut/wheelchair_ws/build

# Utility rule file for spencer_vision_msgs_generate_messages_cpp.

# Include the progress variables for this target.
include spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/progress.make

spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h
spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h
spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h
spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h


/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h: /opt/ros/noetic/lib/gencpp/gen_cpp.py
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonImage.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h: /opt/ros/noetic/share/std_msgs/msg/Header.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h: /opt/ros/noetic/share/sensor_msgs/msg/Image.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h: /opt/ros/noetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/umut/wheelchair_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C++ code from spencer_vision_msgs/PersonImage.msg"
	cd /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs && /home/umut/wheelchair_ws/build/catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonImage.msg -Ispencer_vision_msgs:/home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg -Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg -Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p spencer_vision_msgs -o /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs -e /opt/ros/noetic/share/gencpp/cmake/..

/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /opt/ros/noetic/lib/gencpp/gen_cpp.py
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonImages.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /opt/ros/noetic/share/std_msgs/msg/Header.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /opt/ros/noetic/share/sensor_msgs/msg/Image.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonImage.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h: /opt/ros/noetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/umut/wheelchair_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating C++ code from spencer_vision_msgs/PersonImages.msg"
	cd /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs && /home/umut/wheelchair_ws/build/catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonImages.msg -Ispencer_vision_msgs:/home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg -Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg -Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p spencer_vision_msgs -o /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs -e /opt/ros/noetic/share/gencpp/cmake/..

/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h: /opt/ros/noetic/lib/gencpp/gen_cpp.py
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonROI.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h: /opt/ros/noetic/share/sensor_msgs/msg/RegionOfInterest.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h: /opt/ros/noetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/umut/wheelchair_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating C++ code from spencer_vision_msgs/PersonROI.msg"
	cd /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs && /home/umut/wheelchair_ws/build/catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonROI.msg -Ispencer_vision_msgs:/home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg -Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg -Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p spencer_vision_msgs -o /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs -e /opt/ros/noetic/share/gencpp/cmake/..

/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /opt/ros/noetic/lib/gencpp/gen_cpp.py
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonROIs.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonROI.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /opt/ros/noetic/share/std_msgs/msg/Header.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /opt/ros/noetic/share/sensor_msgs/msg/RegionOfInterest.msg
/home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h: /opt/ros/noetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/umut/wheelchair_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating C++ code from spencer_vision_msgs/PersonROIs.msg"
	cd /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs && /home/umut/wheelchair_ws/build/catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg/PersonROIs.msg -Ispencer_vision_msgs:/home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs/msg -Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg -Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p spencer_vision_msgs -o /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs -e /opt/ros/noetic/share/gencpp/cmake/..

spencer_vision_msgs_generate_messages_cpp: spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp
spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImage.h
spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonImages.h
spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROI.h
spencer_vision_msgs_generate_messages_cpp: /home/umut/wheelchair_ws/devel/include/spencer_vision_msgs/PersonROIs.h
spencer_vision_msgs_generate_messages_cpp: spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/build.make

.PHONY : spencer_vision_msgs_generate_messages_cpp

# Rule to build all files generated by this target.
spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/build: spencer_vision_msgs_generate_messages_cpp

.PHONY : spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/build

spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/clean:
	cd /home/umut/wheelchair_ws/build/spencer_people_tracking/messages/spencer_vision_msgs && $(CMAKE_COMMAND) -P CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/cmake_clean.cmake
.PHONY : spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/clean

spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/depend:
	cd /home/umut/wheelchair_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/umut/wheelchair_ws/src /home/umut/wheelchair_ws/src/spencer_people_tracking/messages/spencer_vision_msgs /home/umut/wheelchair_ws/build /home/umut/wheelchair_ws/build/spencer_people_tracking/messages/spencer_vision_msgs /home/umut/wheelchair_ws/build/spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : spencer_people_tracking/messages/spencer_vision_msgs/CMakeFiles/spencer_vision_msgs_generate_messages_cpp.dir/depend

