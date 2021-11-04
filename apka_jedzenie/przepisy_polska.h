#ifndef PRZEPISY_POLSKA_H
#define PRZEPISY_POLSKA_H

#include <QDialog>

namespace Ui {
class przepisy_polska;
}

class przepisy_polska : public QDialog
{
    Q_OBJECT

public:
    explicit przepisy_polska(QWidget *parent = nullptr);
    ~przepisy_polska();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::przepisy_polska *ui;
};

#endif // PRZEPISY_POLSKA_H
