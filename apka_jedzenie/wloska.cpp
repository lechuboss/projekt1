#include "wloska.h"
#include "ui_wloska.h"
#include <QDesktopServices>
#include <QUrl>

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

void wloska::on_pushButton_6_clicked()
{
    QString link="https://www.facebook.com/piecszewska/";
    QDesktopServices::openUrl(QUrl(link));
}

