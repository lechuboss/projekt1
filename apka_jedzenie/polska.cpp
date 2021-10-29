#include "polska.h"
#include "ui_polska.h"
#include <QDesktopServices>
#include <QUrl>
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

void polska::on_pushButton_2_clicked()
{
    QString link="http://www.jadalnia.wroclaw.pl";
    QDesktopServices::openUrl(QUrl(link));
}


void polska::on_pushButton_3_clicked()
{
    QString link="https://restauracjakonspira.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void polska::on_pushButton_4_clicked()
{
    QString link="http://www.lwowska.com.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void polska::on_pushButton_5_clicked()
{
    QString link="https://m.facebook.com/KurnaChataWroclaw/?locale2=pl_PL";
    QDesktopServices::openUrl(QUrl(link));
}

void polska::on_pushButton_clicked()
{
    QString link="https://www.restauracjainnabajka.pl/";
    QDesktopServices::openUrl(QUrl(link));
}

