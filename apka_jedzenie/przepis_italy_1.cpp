#include "przepis_italy_1.h"
#include "ui_przepis_italy_1.h"

przepis_italy_1::przepis_italy_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_italy_1)
{
    ui->setupUi(this);
}

przepis_italy_1::~przepis_italy_1()
{
    delete ui;
}
