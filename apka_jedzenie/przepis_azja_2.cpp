#include "przepis_azja_2.h"
#include "ui_przepis_azja_2.h"

przepis_azja_2::przepis_azja_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_azja_2)
{
    ui->setupUi(this);
}

przepis_azja_2::~przepis_azja_2()
{
    delete ui;
}
