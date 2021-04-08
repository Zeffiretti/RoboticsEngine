//
// Created by zeffi on 2021/4/8.
//
#include "dualpendulum.h"

namespace dual_pendulum {
CartesianVector dualForwardKin(double length1, double length2, DualJointVector theta) {
  CartesianVector cartesian_vector;
  double theta2 = theta(0) + theta(1);
//  cartesian_vector(0) = (double) (-length2 * qSin(theta2) - length1 * qSin(theta(0)));
//  cartesian_vector(1) = (double) (length2 * qCos(theta2) + length1 * qCos(theta(0)));
//  cartesian_vector(2) = 0;
  cartesian_vector << (double) (-length2 * qSin(theta2) - length1 * qSin(theta(0))),
      (double) (length2 * qCos(theta2) + length1 * qCos(theta(0))),
      0;
  return cartesian_vector;
}
}
