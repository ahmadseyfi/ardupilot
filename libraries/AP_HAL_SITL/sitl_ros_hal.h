// Inclusion guard to prevent this header from being included multiple times
#ifndef __MODULAR_LIB_PKG_HELLO_WORLD_H
#define __MODULAR_LIB_PKG_HELLO_WORLD_H

#include <sys/time.h>

//! Broadcast a hello-world message over ROS_INFO
void sitl_ros_init();
int sitl_ros_gettimeofday(struct timeval *tv, struct timezone *tz);
int sitl_ros_usleep(useconds_t usec);
#endif

