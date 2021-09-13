/*
 * Copyright 2015 Aldebaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef CAMERA_INFO_DEF_HPP
#define CAMERA_INFO_DEF_HPP

#include <sensor_msgs/CameraInfo.h>
#include <boost/assign/list_of.hpp>

namespace naoqi
{
namespace converter
{
namespace camera_info_definitions
{

/**
* TOP CAMERA
*/
inline sensor_msgs::CameraInfo createCameraInfoTOPVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraTop_optical_frame";

  cam_info_msg.width = 640;
  cam_info_msg.height = 480;
  cam_info_msg.K = boost::array<double, 9>{{ 315.81212, 0, 165.27904, 0, 318.33079, 133.75167, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(0.166124)(-0.303261)( 0.017645)(0.002905)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 325.9407, 0, 166.15129, 0, 0, 325.52567, 136.9105, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


inline sensor_msgs::CameraInfo createCameraInfoTOPQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraTop_optical_frame";

  cam_info_msg.width = 320;
  cam_info_msg.height = 240;
  cam_info_msg.K = boost::array<double, 9>{{ 315.81212, 0, 165.27904, 0, 318.33079, 133.75167, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(0.166124)(-0.303261)( 0.017645)(0.002905)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 325.9407, 0, 166.15129, 0, 0, 325.52567, 136.9105, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


inline sensor_msgs::CameraInfo createCameraInfoTOPQQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraTop_optical_frame";

  cam_info_msg.width = 160;
  cam_info_msg.height = 120;
  cam_info_msg.K = boost::array<double, 9>{{ 315.81212, 0, 165.27904, 0, 318.33079, 133.75167, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(0.166124)(-0.303261)( 0.017645)(0.002905)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 325.9407, 0, 166.15129, 0, 0, 325.52567, 136.9105, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


/**
* BOTTOM CAMERA
*/
inline sensor_msgs::CameraInfo createCameraInfoBOTTOMVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraBottom_optical_frame";

  cam_info_msg.width = 640;
  cam_info_msg.height = 480;
  cam_info_msg.K = boost::array<double, 9>{{ 558.570339530768, 0, 308.885375457296, 0, 556.122943034837, 247.600724811385, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(-0.0648763971625288)(0.0612520196884308)(0.0038281538281731)(-0.00551104078371959)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 549.571655273438, 0, 304.799679526441, 0, 0, 549.687316894531, 248.526959297022, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


inline sensor_msgs::CameraInfo createCameraInfoBOTTOMQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraBottom_optical_frame";

  cam_info_msg.width = 320;
  cam_info_msg.height = 240;
  cam_info_msg.K = boost::array<double, 9>{{ 278.236008818534, 0, 156.194471689706, 0, 279.380102992049, 126.007123836447, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(-0.0481869853715082)(0.0201858398559121)(0.0030362056699177)(-0.00172241952442813)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 273.491455078125, 0, 155.112454709117, 0, 0, 275.743133544922, 126.057357467223, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


inline sensor_msgs::CameraInfo createCameraInfoBOTTOMQQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraBottom_optical_frame";

  cam_info_msg.width = 160;
  cam_info_msg.height = 120;
  cam_info_msg.K = boost::array<double, 9>{{ 141.611855886672, 0, 78.6494086288656, 0, 141.367163830175, 58.9220646201529, 0, 0, 1 }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = boost::assign::list_of(-0.0688388724945936)(0.0697453843669642)(0.00309518737071049)(-0.00570486993696543)(0).convert_to_container<std::vector<double> >();

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 138.705535888672, 0, 77.2544255212306, 0, 0, 138.954086303711, 58.7000861760043, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


/**
* DEPTH CAMERA
*/
inline sensor_msgs::CameraInfo createCameraInfoDEPTHVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraDepth_optical_frame";

  cam_info_msg.width = 640;
  cam_info_msg.height = 480;
  cam_info_msg.K = boost::array<double, 9>{{ 281.41581, 0, 148.77276, 0, 280.55306, 132.24356, 0, 0, 1  }};

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = {-0.023295,-0.124916,0.003438,-0.007480,0};

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 274.03323, 0, 145.52046, 0, 0, 277.86542, 133.14393, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}


inline sensor_msgs::CameraInfo createCameraInfoDEPTHQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraDepth_optical_frame";

  cam_info_msg.width = 320;
  cam_info_msg.height = 240;
  cam_info_msg.K = boost::array<double, 9>{{ 281.41581, 0, 148.77276, 0, 280.55306, 132.24356, 0, 0, 1  }};

  cam_info_msg.distortion_model = "plumb_bob";
  //cam_info_msg.D = boost::assign::list_of(-0.0688388724945936)(0.0697453843669642)(0.00309518737071049)(-0.00570486993696543)(0);
  cam_info_msg.D = {-0.023295,-0.124916,0.003438,-0.007480,0};

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 274.03323, 0, 145.52046, 0, 0, 277.86542, 133.14393, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}

inline sensor_msgs::CameraInfo createCameraInfoDEPTHQQVGA()
{
  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraDepth_optical_frame";

  cam_info_msg.width = 160;
  cam_info_msg.height = 120;
  cam_info_msg.K = boost::array<double, 9>{{ 281.41581, 0, 148.77276, 0, 280.55306, 132.24356, 0, 0, 1  }};

  //cam_info_msg.distortion_model = "plumb_bob";
  //cam_info_msg.D = boost::assign::list_of(-0.0688388724945936)(0.0697453843669642)(0.00309518737071049)(-0.00570486993696543)(0);
  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D = {-0.023295,-0.124916,0.003438,-0.007480,0};

  cam_info_msg.R = boost::array<double, 9>{{ 1, 0, 0, 0, 1, 0, 0, 0, 1 }};

  cam_info_msg.P = boost::array<double, 12>{{ 274.03323, 0, 145.52046, 0, 0, 277.86542, 133.14393, 0, 0, 0, 1, 0 }};

  return cam_info_msg;
}

/**
* STEREO CAMERA
*/
inline sensor_msgs::CameraInfo createCameraInfoStereo(
        const int &width,
        const int &height,
        const float &reductionFactor) {

  sensor_msgs::CameraInfo cam_info_msg;

  cam_info_msg.header.frame_id = "CameraDepth_optical_frame";

  const size_t nK = 9;
  const size_t nD = 5;
  const size_t nR = 9;
  const size_t nP = 12;

  float kTab[nK] = {703.102356f/reductionFactor, 0, 647.821594f/reductionFactor,
                    0, 702.432312f/reductionFactor, 380.971680f/reductionFactor,
                    0, 0, 1 };

  float dTab[nD] = {-0.168594331,
                    .00881872326,
                    -0.000182721298,
                    -0.0000145479062,
                    0.0137237618};

  float rTab[nR] = {0.999984741, 0.000130843779, 0.00552622462,
                    -0.000111592424, 0.999993920, -0.00348380185,
                    -0.00552664697, 0.00348313176, 0.999978662};

  float pTab[nP] = {569.869568f/reductionFactor, 0, 644.672058f/reductionFactor, 0,
                    0, 569.869568f/reductionFactor, 393.368958f/reductionFactor, 0,
                    0, 0, 1, 0 };


  cam_info_msg.width = width;
  cam_info_msg.height = height;

  for (int i = 0; i < nK; ++i)
    cam_info_msg.K.at(i) = kTab[i];

  cam_info_msg.distortion_model = "plumb_bob";
  cam_info_msg.D.assign(dTab, dTab + nD);

  for (int i = 0; i < nR; ++i)
    cam_info_msg.R.at(i) = rTab[i];

  for (int i = 0; i < nP; ++i)
    cam_info_msg.P.at(i) = pTab[i];

  return cam_info_msg;
}

inline sensor_msgs::CameraInfo createCameraInfoDEPTH720P()
{
  return createCameraInfoStereo(1280, 720, 1.0);
}


inline sensor_msgs::CameraInfo createCameraInfoDEPTHQ720P()
{
  return createCameraInfoStereo(640, 360, 2.0);
}

inline sensor_msgs::CameraInfo createCameraInfoDEPTHQQ720P()
{
  return createCameraInfoStereo(320, 180, 4.0);
}

inline sensor_msgs::CameraInfo createCameraInfoDEPTHQQQ720P()
{
  return createCameraInfoStereo(160, 90, 8.0);
}

inline sensor_msgs::CameraInfo createCameraInfoDEPTHQQQQ720P()
{
  return createCameraInfoStereo(80, 45, 16.0);
}

// Complete methods for stereo image parameteres
inline sensor_msgs::CameraInfo createCameraInfoStereo720PX2()
{
  return createCameraInfoStereo(2560, 720, 1.0);
}

inline sensor_msgs::CameraInfo createCameraInfoStereoQ720PX2()
{
    return createCameraInfoStereo(1280, 360, 2.0);
}

inline sensor_msgs::CameraInfo createCameraInfoStereoQQ720PX2()
{
    return createCameraInfoStereo(640, 180, 4.0);
}

inline sensor_msgs::CameraInfo createCameraInfoStereoQQQ720PX2()
{
    return createCameraInfoStereo(320, 90, 8.0);
}

inline sensor_msgs::CameraInfo createCameraInfoStereoQQQQ720PX2()
{
    return createCameraInfoStereo(160, 45, 16.0);
}

} // camera_info_definitions
} //publisher
} //naoqi


#endif
