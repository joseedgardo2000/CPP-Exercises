#ifndef SIGNALSLOTSII_H
#define SIGNALSLOTSII_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class SignalSlotsII:public QWidget
{
    Q_OBJECT
private:
    QPushButton *btn1;
    QLabel *lbl;
public:
    SignalSlotsII();
public slots:
    void reveal();
};

#endif // SIGNALSLOTSII_H
