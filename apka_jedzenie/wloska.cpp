#include "wloska.h"
#include "ui_wloska.h"

wloska::wloska(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wloska)
{
    ui->setupUi(this);
}

wloska::~wloska()
{
    delete ui;
}
