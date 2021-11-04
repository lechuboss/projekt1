#ifndef PRZEPISY_USA_H
#define PRZEPISY_USA_H

#include <QDialog>

namespace Ui {
class przepisy_usa;
}

class przepisy_usa : public QDialog
{
    Q_OBJECT

public:
    explicit przepisy_usa(QWidget *parent = nullptr);
    ~przepisy_usa();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::przepisy_usa *ui;
};

#endif // PRZEPISY_USA_H
