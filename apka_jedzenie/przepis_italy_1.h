#ifndef PRZEPIS_ITALY_1_H
#define PRZEPIS_ITALY_1_H

#include <QDialog>

namespace Ui {
class przepis_italy_1;
}

class przepis_italy_1 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_italy_1(QWidget *parent = nullptr);
    ~przepis_italy_1();

private:
    Ui::przepis_italy_1 *ui;
};

#endif // PRZEPIS_ITALY_1_H
