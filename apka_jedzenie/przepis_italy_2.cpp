#include "przepis_italy_2.h"
#include "ui_przepis_italy_2.h"

przepis_italy_2::przepis_italy_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepis_italy_2)
{
    ui->setupUi(this);
}

przepis_italy_2::~przepis_italy_2()
{
    delete ui;
}
