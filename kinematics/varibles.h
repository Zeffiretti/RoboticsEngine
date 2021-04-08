//
// Created by zeffi on 2021/4/8.
//

#ifndef ROBOTICSENGINE_KINEMATICS_VARIBLES_H_
#define ROBOTICSENGINE_KINEMATICS_VARIBLES_H_
#include <Eigen/Dense>
//#include <Eigen/M
#include <QtMath>

typedef Eigen::Vector3d CartesianVector;
typedef Eigen::Vector2d DualJointVector;
typedef Eigen::Vector2d DualForceVector;
typedef Eigen::Matrix3Xd WorldFrame;
static CartesianVector i(1, 0, 0);
static CartesianVector j(0, 1, 0);
static CartesianVector k(0, 0, 1);

#endif //ROBOTICSENGINE_KINEMATICS_VARIBLES_H_
