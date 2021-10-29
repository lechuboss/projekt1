#ifndef POLSKA_H
#define POLSKA_H

#include <QDialog>

namespace Ui {
class polska;
}

class polska : public QDialog
{
    Q_OBJECT

public:
    explicit polska(QWidget *parent = nullptr);
    ~polska();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::polska *ui;
};

#endif // POLSKA_H
