#include "przepis_usa_1.h"
#include "ui_przepis_usa_1.h"

przepis_usa_1::przepis_usa_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_usa_1)
{
    ui->setupUi(this);
}

przepis_usa_1::~przepis_usa_1()
{
    delete ui;
}
