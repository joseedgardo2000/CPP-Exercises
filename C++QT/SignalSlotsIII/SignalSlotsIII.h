#ifndef SIGNALSLOTSIII_H
#define SIGNALSLOTSIII_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class SignalSlotsIII:public QWidget
{
    Q_OBJECT
private:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;

    QLabel *lbl1;
    QLabel *lbl2;

    bool dancing;
public:
    SignalSlotsIII();
public slots:
    void toDance();
    void reveal();
signals:
    void invlabel();
    void vislabel();
};

#endif // SIGNALSLOTSIII_H
