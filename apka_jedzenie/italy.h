#ifndef ITALY_H
#define ITALY_H

#include <QDialog>

namespace Ui {
class italy;
}

class italy : public QDialog
{
    Q_OBJECT

public:
    explicit italy(QWidget *parent = nullptr);
    ~italy();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::italy *ui;
};

#endif // ITALY_H
