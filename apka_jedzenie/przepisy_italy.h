#ifndef PRZEPISY_ITALY_H
#define PRZEPISY_ITALY_H

#include <QDialog>

namespace Ui {
class przepisy_italy;
}

class przepisy_italy : public QDialog
{
    Q_OBJECT

public:
    explicit przepisy_italy(QWidget *parent = nullptr);
    ~przepisy_italy();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::przepisy_italy *ui;
};

#endif // PRZEPISY_ITALY_H
