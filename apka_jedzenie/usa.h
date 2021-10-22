#ifndef USA_H
#define USA_H

#include <QDialog>

namespace Ui {
class usa;
}

class usa : public QDialog
{
    Q_OBJECT

public:
    explicit usa(QWidget *parent = nullptr);
    ~usa();

private:
    Ui::usa *ui;
};

#endif // USA_H
