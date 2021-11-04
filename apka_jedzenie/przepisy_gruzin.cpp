#include "przepisy_gruzin.h"
#include "ui_przepisy_gruzin.h"

przepisy_gruzin::przepisy_gruzin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepisy_gruzin)
{
    ui->setupUi(this);
}

przepisy_gruzin::~przepisy_gruzin()
{
    delete ui;
}
