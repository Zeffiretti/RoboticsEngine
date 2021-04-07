#include "dualpendulum.h"

DualPendulum::DualPendulum() {
  Gravity << 0, 0, -9.8;
//  pos.
  pos << M_PI_4, M_PI_4;
}

DualPendulum::~DualPendulum() {
}
