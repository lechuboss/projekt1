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

private:
    Ui::azja *ui;
};

#endif // AZJA_H
