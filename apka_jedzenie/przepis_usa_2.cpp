#include "przepis_usa_2.h"
#include "ui_przepis_usa_2.h"

przepis_usa_2::przepis_usa_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_usa_2)
{
    ui->setupUi(this);
}

przepis_usa_2::~przepis_usa_2()
{
    delete ui;
}
