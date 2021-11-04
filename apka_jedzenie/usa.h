#ifndef USA_H
#define USA_H

#include <QDialog>

namespace Ui {
class usa;
}

class usa : public QDialog
{
    Q_OBJECT

public:
    explicit usa(QWidget *parent = nullptr);
    ~usa();


private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::usa *ui;
};

#endif // USA_H
