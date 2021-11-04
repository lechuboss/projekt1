#include "przepisy_polska.h"
#include "ui_przepisy_polska.h"
#include "przepis_polska_1.h"
#include "przepis_polska_2.h"

przepisy_polska::przepisy_polska(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepisy_polska)
{
    ui->setupUi(this);
}

przepisy_polska::~przepisy_polska()
{
    delete ui;
}

void przepisy_polska::on_pushButton_clicked()
{
   przepis_polska_1 przepis_polska_1;
   przepis_polska_1.setModal(true);
   przepis_polska_1.exec();
}


void przepisy_polska::on_pushButton_2_clicked()
{
    przepis_polska_2 przepis_polska_2;
    przepis_polska_2.setModal(true);
    przepis_polska_2.exec();
}

