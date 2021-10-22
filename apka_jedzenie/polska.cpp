#include "polska.h"
#include "ui_polska.h"

polska::polska(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::polska)
{
    ui->setupUi(this);
}

polska::~polska()
{
    delete ui;
}
