#include "italy.h"
#include "ui_italy.h"
#include <QDesktopServices>
#include <QUrl>
#include "przepisy_italy.h"
italy::italy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::italy)
{
    ui->setupUi(this);
}

italy::~italy()
{
    delete ui;
}

void italy::on_pushButton_6_clicked()
{
    QString link="https://aulawroclaw.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void italy::on_pushButton_7_clicked()
{
    QString link="https://www.facebook.com/VaffaWroclaw/";
    QDesktopServices::openUrl(QUrl(link));
}


void italy::on_pushButton_8_clicked()
{
    QString link="https://pinola.pl/wordpress/";
    QDesktopServices::openUrl(QUrl(link));
}


void italy::on_pushButton_9_clicked()
{
    QString link="https://tuttisanti.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void italy::on_pushButton_10_clicked()
{
    QString link="https://www.facebook.com/OliwaOgien/";
    QDesktopServices::openUrl(QUrl(link));
}


void italy::on_pushButton_11_clicked()
{
    przepisy_italy przepisy_italy;
    przepisy_italy.setModal(true);
    przepisy_italy.exec ();


}

