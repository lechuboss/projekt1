#ifndef PRZEPIS_POLSKA_1_H
#define PRZEPIS_POLSKA_1_H

#include <QDialog>

namespace Ui {
class przepis_polska_1;
}

class przepis_polska_1 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_polska_1(QWidget *parent = nullptr);
    ~przepis_polska_1();

private:
    Ui::przepis_polska_1 *ui;
};

#endif // PRZEPIS_POLSKA_1_H
