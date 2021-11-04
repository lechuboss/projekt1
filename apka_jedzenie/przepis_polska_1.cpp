#include "przepis_polska_1.h"
#include "ui_przepis_polska_1.h"

przepis_polska_1::przepis_polska_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_polska_1)
{
    ui->setupUi(this);
}

przepis_polska_1::~przepis_polska_1()
{
    delete ui;
}
