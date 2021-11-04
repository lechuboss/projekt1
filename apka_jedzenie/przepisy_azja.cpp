#include "przepisy_azja.h"
#include "ui_przepisy_azja.h"
#include "przepis_azja_1.h"
#include "przepis_azja_2.h"
przepisy_azja::przepisy_azja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepisy_azja)
{
    ui->setupUi(this);
}

przepisy_azja::~przepisy_azja()
{
    delete ui;
}

void przepisy_azja::on_pushButton_clicked()
{
    przepis_azja_1 przepis_azja_1;
    przepis_azja_1.setModal(true);
    przepis_azja_1.exec();
}


void przepisy_azja::on_pushButton_2_clicked()
{
przepis_azja_2 przepis_azja_2;
przepis_azja_2.setModal(true);
przepis_azja_2.exec ();
}

