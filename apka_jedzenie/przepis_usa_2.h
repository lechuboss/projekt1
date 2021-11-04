#ifndef PRZEPIS_USA_2_H
#define PRZEPIS_USA_2_H

#include <QDialog>

namespace Ui {
class przepis_usa_2;
}

class przepis_usa_2 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_usa_2(QWidget *parent = nullptr);
    ~przepis_usa_2();

private:
    Ui::przepis_usa_2 *ui;
};

#endif // PRZEPIS_USA_2_H
