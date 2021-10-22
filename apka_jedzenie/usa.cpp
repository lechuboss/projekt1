#include "usa.h"
#include "ui_usa.h"

usa::usa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usa)
{
    ui->setupUi(this);
}

usa::~usa()
{
    delete ui;
}
