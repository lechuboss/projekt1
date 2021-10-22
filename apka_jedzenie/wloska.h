#ifndef WLOSKA_H
#define WLOSKA_H

#include <QDialog>

namespace Ui {
class wloska;
}

class wloska : public QDialog
{
    Q_OBJECT

public:
    explicit wloska(QWidget *parent = nullptr);
    ~wloska();

private:
    Ui::wloska *ui;
};

#endif // WLOSKA_H
