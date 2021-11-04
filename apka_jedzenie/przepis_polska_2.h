#ifndef PRZEPIS_POLSKA_2_H
#define PRZEPIS_POLSKA_2_H

#include <QDialog>

namespace Ui {
class przepis_polska_2;
}

class przepis_polska_2 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_polska_2(QWidget *parent = nullptr);
    ~przepis_polska_2();

private:
    Ui::przepis_polska_2 *ui;
};

#endif // PRZEPIS_POLSKA_2_H
