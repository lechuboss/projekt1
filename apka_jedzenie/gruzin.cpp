#include "gruzin.h"
#include "ui_gruzin.h"

gruzin::gruzin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gruzin)
{
    ui->setupUi(this);
}

gruzin::~gruzin()
{
    delete ui;
}
