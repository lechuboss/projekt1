#ifndef PRZEPIS_AZJA_2_H
#define PRZEPIS_AZJA_2_H

#include <QDialog>

namespace Ui {
class przepis_azja_2;
}

class przepis_azja_2 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_azja_2(QWidget *parent = nullptr);
    ~przepis_azja_2();

private:
    Ui::przepis_azja_2 *ui;
};

#endif // PRZEPIS_AZJA_2_H
