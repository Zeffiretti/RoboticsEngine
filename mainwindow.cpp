#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  dual_pendulum::DualPendulum *dual_pendulum = new dual_pendulum::DualPendulum;
  qDebug() << dual_pendulum->getPos()(0) << "," << dual_pendulum->getPos()(1);
  qDebug() << "End";
}

MainWindow::~MainWindow() {
  delete ui;
}

