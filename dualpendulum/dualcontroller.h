//
// Created by zeffi on 2021/4/8.
//

#ifndef ROBOTICSENGINE_DUALPENDULUM_DUALCONTROLLER_H_
#define ROBOTICSENGINE_DUALPENDULUM_DUALCONTROLLER_H_
#include "kinematics/varibles.h"
namespace dual_control {
class DualController {
  double Kp;
  double Ki;
  double Kd;

  CartesianVector target;
};
}

#endif //ROBOTICSENGINE_DUALPENDULUM_DUALCONTROLLER_H_
