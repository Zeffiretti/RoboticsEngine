#ifndef DUAL_PENDULUM_H
#define DUAL_PENDULUM_H
#include <iostream>
#include <Eigen/Dense>
#include <QtMath>

class DualPendulum {
 public:
  DualPendulum();
  ~DualPendulum();
  void setPos(Eigen::RowVector2f p) { pos = p; }
  Eigen::RowVector2f getPos(void) { return pos; }

 private:
  Eigen::RowVector2f pos = Eigen::RowVector2f::Random();
  Eigen::RowVector2f omega = Eigen::RowVector2f::Random();
  Eigen::RowVector2f mass;
  Eigen::RowVector2f length;
  Eigen::RowVector2f com;
  Eigen::RowVector2f inertia;
  Eigen::Vector3f Gravity;

};

#endif // !DUAL_PENDULUM_H
