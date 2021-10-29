#include "usa.h"
#include "ui_usa.h"
#include <QDesktopServices>
#include <QUrl>
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

void usa::on_pushButton_8_clicked()
{
    QString link="http://www.soczewka.wroclaw.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void usa::on_pushButton_7_clicked()
{
    QString link="https://www.facebook.com/whiskeyinthejarwroclaw/";
    QDesktopServices::openUrl(QUrl(link));
}


void usa::on_pushButton_6_clicked()
{
    QString link="https://www.66-american-burger.pl/";
    QDesktopServices::openUrl(QUrl(link));
}


void usa::on_pushButton_9_clicked()
{
    QString link="https://www.facebook.com/heavymeat/";
    QDesktopServices::openUrl(QUrl(link));
}


void usa::on_pushButton_10_clicked()
{
    QString link="http://americandream.com.pl/";
    QDesktopServices::openUrl(QUrl(link));
}

