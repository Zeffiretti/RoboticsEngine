#include "dualpendulum.h"

DualPendulum::DualPendulum() {
  Gravity << 0, 0, -9.8;
}

void DualPendulum::setPos(Eigen::RowVector2f p) {
  pos = p;
}

DualPendulum::~DualPendulum() {
}
