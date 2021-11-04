#include "azja.h"
#include "ui_azja.h"
#include <QDesktopServices>
#include <QUrl>
#include "przepisy_azja.h"
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

void azja::on_pushButton_6_clicked()
{
    QString link="https://districtsaigon.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void azja::on_pushButton_7_clicked()
{
    QString link="https://www.osiemmisek.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void azja::on_pushButton_8_clicked()
{
    QString link="https://longyenbarorientalny.eatbu.com/?lang=pl";
    QDesktopServices::openUrl(QUrl(link));
}


void azja::on_pushButton_9_clicked()
{
    QString link="https://woothai.pl/pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void azja::on_pushButton_10_clicked()
{
    QString link="https://woosabi.pl/wroclaw/";
    QDesktopServices::openUrl(QUrl(link));
}


void azja::on_pushButton_11_clicked()
{
   przepisy_azja przepisy_azja;
   przepisy_azja.setModal(true);
   przepisy_azja.exec();

}

