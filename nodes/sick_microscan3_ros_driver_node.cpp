// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------

/*!
*  Copyright (C) 2018, SICK AG, Waldkirch
*  Copyright (C) 2018, FZI Forschungszentrum Informatik, Karlsruhe, Germany
*
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.

*/

// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!
* \file sick_micro_scan_ros_driver_node.cpp
*
* \author  Lennart Puck <puck@fzi.de>
* \date    2018-09-24
*/
//----------------------------------------------------------------------

#include <ros/ros.h>
#include "sick_microscan3_ros_driver/Microscan3Ros.h"

/**
 * @brief main The Main node to start the Ros Driver, this method is executed via launch file
 * @param argc number of arguments given
 * @param argv arguments
 * @return is succesful, will always return 0
 */
int main(int argc, char** argv)
{
   ros::init(argc, argv, "sick_microscan3_ros_driver");

   sick::Microscan3Ros microscan3_ros;

   ros::spin();
   return 0;
}
