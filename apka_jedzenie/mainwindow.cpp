#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "polska.h"
#include "wloska.h"
#include "azja.h"
#include "usa.h"
#include "gruzin.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
  polska polska;
  polska.setModal(true);
  polska.exec();
}
void MainWindow::on_pushButton_2_clicked()
{
    wloska wloska;
    wloska.setModal(true);
    wloska.exec();
}
void MainWindow::on_pushButton_3_clicked()
{
    azja azja;
    azja.setModal(true);
    azja.exec();
}
void MainWindow::on_pushButton_4_clicked()
{
    usa usa;
    usa.setModal(true);
    usa.exec();
}
void MainWindow::on_pushButton_5_clicked()
{
    gruzin gruzin;
    gruzin.setModal(true);
    gruzin.exec();
}

