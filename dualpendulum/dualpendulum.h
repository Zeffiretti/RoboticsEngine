#ifndef DUAL_PENDULUM_H
#define DUAL_PENDULUM_H
#include <iostream>
#include <Eigen/Dense>
#include <QDebug>
#include <QtMath>
#include "kinematics/varibles.h"
#include "dualdynamics.h"
namespace dual_pendulum {
class DualPendulum {
 public:
  DualPendulum();
  ~DualPendulum();
  void setPos(Eigen::RowVector2d p) { pos = p; }
  Eigen::RowVector2d getPos(void) { return pos; }

 private:
  Eigen::RowVector2d pos = Eigen::RowVector2d::Random();
  Eigen::RowVector2d omega = Eigen::RowVector2d::Random();
  Eigen::RowVector2d mass;
  Eigen::RowVector2d length;
  Eigen::RowVector2d com;
  Eigen::RowVector2d inertia;
  Eigen::Vector3d Gravity;
  CartesianVector end_point;
  DualJointVector join_vector;
  DualForceVector force_vector;
//  WorldFrame world_frame;
};

CartesianVector dualForwardKin(double length1, double length2, DualJointVector theta);
}
#endif // !DUAL_PENDULUM_H
