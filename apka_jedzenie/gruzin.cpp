#include "gruzin.h"
#include "ui_gruzin.h"
#include <QDesktopServices>
#include <QUrl>
#include "przepisy_gruzin.h"
gruzin::gruzin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gruzin)
{
    ui->setupUi(this);
}

gruzin::~gruzin()
{
    delete ui;
}

void gruzin::on_pushButton_7_clicked()
{
    QString link="https://www.facebook.com/ugruzinawroclaw/";
    QDesktopServices::openUrl(QUrl(link));
}


void gruzin::on_pushButton_6_clicked()
{
    QString link="https://www.khinkalnya.com/pl/";
    QDesktopServices::openUrl(QUrl(link));
}

void gruzin::on_pushButton_8_clicked()
{
    QString link="https://www.facebook.com/JemyGruzina/";
    QDesktopServices::openUrl(QUrl(link));
}


void gruzin::on_pushButton_9_clicked()
{
    QString link="https://www.pyszne.pl/menu/andali-georgian-food-wroclaw-ruska";
    QDesktopServices::openUrl(QUrl(link));
}


void gruzin::on_pushButton_2_clicked()
{
    przepisy_gruzin przepisy_gruzin;
    przepisy_gruzin.setModal(true);
    przepisy_gruzin.exec ();

}

