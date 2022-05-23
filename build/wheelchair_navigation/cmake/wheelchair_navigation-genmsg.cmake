# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "wheelchair_navigation: 3 messages, 1 services")

set(MSG_I_FLAGS "-Iwheelchair_navigation:/home/meam/wheelchair_ws/src/wheelchair_navigation/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(wheelchair_navigation_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_custom_target(_wheelchair_navigation_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "wheelchair_navigation" "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" ""
)

get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_custom_target(_wheelchair_navigation_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "wheelchair_navigation" "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" ""
)

get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_custom_target(_wheelchair_navigation_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "wheelchair_navigation" "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" ""
)

get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_custom_target(_wheelchair_navigation_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "wheelchair_navigation" "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_cpp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_cpp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
)

### Generating Services
_generate_srv_cpp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
)

### Generating Module File
_generate_module_cpp(wheelchair_navigation
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(wheelchair_navigation_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(wheelchair_navigation_generate_messages wheelchair_navigation_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_cpp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_cpp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_cpp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_cpp _wheelchair_navigation_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(wheelchair_navigation_gencpp)
add_dependencies(wheelchair_navigation_gencpp wheelchair_navigation_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS wheelchair_navigation_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_eus(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_eus(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
)

### Generating Services
_generate_srv_eus(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
)

### Generating Module File
_generate_module_eus(wheelchair_navigation
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(wheelchair_navigation_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(wheelchair_navigation_generate_messages wheelchair_navigation_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_eus _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_eus _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_eus _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_eus _wheelchair_navigation_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(wheelchair_navigation_geneus)
add_dependencies(wheelchair_navigation_geneus wheelchair_navigation_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS wheelchair_navigation_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_lisp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_lisp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
)

### Generating Services
_generate_srv_lisp(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
)

### Generating Module File
_generate_module_lisp(wheelchair_navigation
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(wheelchair_navigation_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(wheelchair_navigation_generate_messages wheelchair_navigation_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_lisp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_lisp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_lisp _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_lisp _wheelchair_navigation_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(wheelchair_navigation_genlisp)
add_dependencies(wheelchair_navigation_genlisp wheelchair_navigation_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS wheelchair_navigation_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_nodejs(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_nodejs(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
)

### Generating Services
_generate_srv_nodejs(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
)

### Generating Module File
_generate_module_nodejs(wheelchair_navigation
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(wheelchair_navigation_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(wheelchair_navigation_generate_messages wheelchair_navigation_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_nodejs _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_nodejs _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_nodejs _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_nodejs _wheelchair_navigation_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(wheelchair_navigation_gennodejs)
add_dependencies(wheelchair_navigation_gennodejs wheelchair_navigation_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS wheelchair_navigation_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_py(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
)
_generate_msg_py(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
)

### Generating Services
_generate_srv_py(wheelchair_navigation
  "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
)

### Generating Module File
_generate_module_py(wheelchair_navigation
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(wheelchair_navigation_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(wheelchair_navigation_generate_messages wheelchair_navigation_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorMonitor.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_py _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/MotorReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_py _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/msg/SpeedReference.msg" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_py _wheelchair_navigation_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/meam/wheelchair_ws/src/wheelchair_navigation/srv/ModeChange.srv" NAME_WE)
add_dependencies(wheelchair_navigation_generate_messages_py _wheelchair_navigation_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(wheelchair_navigation_genpy)
add_dependencies(wheelchair_navigation_genpy wheelchair_navigation_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS wheelchair_navigation_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/wheelchair_navigation
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(wheelchair_navigation_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/wheelchair_navigation
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(wheelchair_navigation_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/wheelchair_navigation
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(wheelchair_navigation_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/wheelchair_navigation
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(wheelchair_navigation_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/wheelchair_navigation
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(wheelchair_navigation_generate_messages_py std_msgs_generate_messages_py)
endif()
