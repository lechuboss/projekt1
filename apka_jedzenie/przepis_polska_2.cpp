#include "przepis_polska_2.h"
#include "ui_przepis_polska_2.h"

przepis_polska_2::przepis_polska_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_polska_2)
{
    ui->setupUi(this);
}

przepis_polska_2::~przepis_polska_2()
{
    delete ui;
}
