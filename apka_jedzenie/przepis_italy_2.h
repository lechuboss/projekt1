#ifndef PRZEPIS_ITALY_2_H
#define PRZEPIS_ITALY_2_H

#include <QDialog>

namespace Ui {
class przepis_italy_2;
}

class przepis_italy_2 : public QDialog
{
    Q_OBJECT

public:
    explicit przepis_italy_2(QWidget *parent = nullptr);
    ~przepis_italy_2();

private:
    Ui::przepis_italy_2 *ui;
};

#endif // PRZEPIS_ITALY_2_H
