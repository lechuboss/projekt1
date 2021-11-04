#ifndef AZJA_H
#define AZJA_H

#include <QDialog>

namespace Ui {
class azja;
}

class azja : public QDialog
{
    Q_OBJECT

public:
    explicit azja(QWidget *parent = nullptr);
    ~azja();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::azja *ui;
};

#endif // AZJA_H
