#ifndef POLSKA_H
#define POLSKA_H

#include <QDialog>

namespace Ui {
class polska;
}

class polska : public QDialog
{
    Q_OBJECT

public:
    explicit polska(QWidget *parent = nullptr);
    ~polska();

private:
    Ui::polska *ui;
};

#endif // POLSKA_H
