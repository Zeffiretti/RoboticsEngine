//
// Created by zeffi on 2021/4/8.
//

#ifndef ROBOTICSENGINE_DUALPENDULUM_DUALDYNAMICS_H_
#define ROBOTICSENGINE_DUALPENDULUM_DUALDYNAMICS_H_
#include "kinematics/varibles.h"

namespace dual_dynamics {
static DualForceVector dynamics(double time,
                                double length1, double length2,
                                double theta1, double theta2,
                                double omega1, double omega2,
                                double fx, double fy);
}

#endif //ROBOTICSENGINE_DUALPENDULUM_DUALDYNAMICS_H_
