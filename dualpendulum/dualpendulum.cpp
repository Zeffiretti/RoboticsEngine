#include "dualpendulum.h"

namespace dual_pendulum {

DualPendulum::DualPendulum() {
  Gravity << 0, 0, -9.8;
//  pos.
  length << 1.0, 1.0;
  mass << 1, 1;
  pos << M_PI_4, M_PI_4;
  com = length / 2;
  inertia = 1.0 / 12 * mass.array() * (length.array().square());
  qDebug() << "Inertia is " << inertia(0) << inertia(1);
  join_vector << 0, 0;
  end_point = dualForwardKin(length(0), length(1), join_vector);
  qDebug() << "Initial End Point at (" << end_point(0) << "," << end_point(1) << "," << end_point(2) << ").";
  force_vector << 0, 0;
//  qDebug() << world_frame.col(0)(0) << world_frame.col(1)(1) << world_frame.col(2)(2);
//  qDebug() << dual_dynamics::i;
}

DualPendulum::~DualPendulum() {
}
}
