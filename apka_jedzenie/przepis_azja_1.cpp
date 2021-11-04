#include "przepis_azja_1.h"
#include "ui_przepis_azja_1.h"

przepis_azja_1::przepis_azja_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_azja_1)
{
    ui->setupUi(this);
}

przepis_azja_1::~przepis_azja_1()
{
    delete ui;
}
