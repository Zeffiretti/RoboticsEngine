#ifndef DUAL_PENDULUM_H
#define DUAL_PENDULUM_H
#include <iostream>
#include <Eigen/Dense>

class DualPendulum {
 public:
  DualPendulum();
  ~DualPendulum();
  void setPos(Eigen::RowVector2f p);

 private:
  Eigen::RowVector2f pos = Eigen::RowVector2f::Random();
  Eigen::RowVector2f omega = Eigen::RowVector2f::Random();
  Eigen::Vector3f Gravity;

};

#endif // !DUAL_PENDULUM_H
