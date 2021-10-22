#include "azja.h"
#include "ui_azja.h"

azja::azja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::azja)
{
    ui->setupUi(this);
}

azja::~azja()
{
    delete ui;
}
