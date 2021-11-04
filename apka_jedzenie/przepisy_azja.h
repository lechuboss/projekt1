#ifndef PRZEPISY_AZJA_H
#define PRZEPISY_AZJA_H

#include <QDialog>

namespace Ui {
class przepisy_azja;
}

class przepisy_azja : public QDialog
{
    Q_OBJECT

public:
    explicit przepisy_azja(QWidget *parent = nullptr);
    ~przepisy_azja();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::przepisy_azja *ui;
};

#endif // PRZEPISY_AZJA_H
