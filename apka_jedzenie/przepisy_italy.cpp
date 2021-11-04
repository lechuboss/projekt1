#include "przepisy_italy.h"
#include "ui_przepisy_italy.h"
#include "przepis_italy_1.h"
#include "przepis_italy_2.h"

przepisy_italy::przepisy_italy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przepisy_italy)
{
    ui->setupUi(this);
}

przepisy_italy::~przepisy_italy()
{
    delete ui;
}

void przepisy_italy::on_pushButton_clicked()
{
    przepis_italy_1 przepis_italy_1;
    przepis_italy_1.setModal(true);
    przepis_italy_1.exec();
}


void przepisy_italy::on_pushButton_2_clicked()
{
    przepis_italy_2 przepis_italy_2;
    przepis_italy_2.setModal (true);
    przepis_italy_2.exec ();
}

