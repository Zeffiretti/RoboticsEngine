#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dualpendulum/dualpendulum.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  DualPendulum *dual_pendulum = new DualPendulum;
  qDebug() << dual_pendulum->getPos()(0) << "," << dual_pendulum->getPos()(1);
  qDebug() << "End";
}

MainWindow::~MainWindow() {
  delete ui;
}

