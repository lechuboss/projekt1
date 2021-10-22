#ifndef GRUZIN_H
#define GRUZIN_H

#include <QDialog>

namespace Ui {
class gruzin;
}

class gruzin : public QDialog
{
    Q_OBJECT

public:
    explicit gruzin(QWidget *parent = nullptr);
    ~gruzin();

private:
    Ui::gruzin *ui;
};

#endif // GRUZIN_H
