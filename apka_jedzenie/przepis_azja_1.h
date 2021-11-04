#ifndef PRZEPIS_AZJA_1_H
#define PRZEPIS_AZJA_1_H

#include <QDialog>

namespace Ui {
class przepis_azja_1;
}

class przepis_azja_1 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_azja_1(QWidget *parent = nullptr);
    ~przepis_azja_1();

private:
    Ui::przepis_azja_1 *ui;
};

#endif // PRZEPIS_AZJA_1_H
