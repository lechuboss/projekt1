#ifndef PRZEPIS_USA_1_H
#define PRZEPIS_USA_1_H

#include <QDialog>

namespace Ui {
class przepis_usa_1;
}

class przepis_usa_1 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_usa_1(QWidget *parent = nullptr);
    ~przepis_usa_1();

private:
    Ui::przepis_usa_1 *ui;
};

#endif // PRZEPIS_USA_1_H
