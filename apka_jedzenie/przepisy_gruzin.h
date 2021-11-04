#ifndef PRZEPISY_GRUZIN_H
#define PRZEPISY_GRUZIN_H

#include <QDialog>

namespace Ui {
class przepisy_gruzin;
}

class przepisy_gruzin : public QDialog
{
    Q_OBJECT

public:
    explicit przepisy_gruzin(QWidget *parent = nullptr);
    ~przepisy_gruzin();

private:
    Ui::przepisy_gruzin *ui;
};

#endif // PRZEPISY_GRUZIN_H
