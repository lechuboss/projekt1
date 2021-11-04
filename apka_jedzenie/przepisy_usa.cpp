#include "przepisy_usa.h"
#include "ui_przepisy_usa.h"
#include "przepis_usa_1.h"
#include "przepis_usa_2.h"
przepisy_usa::przepisy_usa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepisy_usa)
{
    ui->setupUi(this);
}

przepisy_usa::~przepisy_usa()
{
    delete ui;
}

void przepisy_usa::on_pushButton_clicked()
{
   przepis_usa_1 przepis_usa_1;
   przepis_usa_1.setModal(true);
   przepis_usa_1.exec();
}


void przepisy_usa::on_pushButton_2_clicked()
{
    przepis_usa_2 przepis_usa_2;
    przepis_usa_2.setModal(true);
    przepis_usa_2.exec();
}

