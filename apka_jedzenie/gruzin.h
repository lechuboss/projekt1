#ifndef GRUZIN_H
#define GRUZIN_H

#include <QDialog>

namespace Ui {
class gruzin;
}

class gruzin : public QDialog
{
    Q_OBJECT

public:
    explicit gruzin(QWidget *parent = nullptr);
    ~gruzin();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gruzin *ui;
};

#endif // GRUZIN_H
