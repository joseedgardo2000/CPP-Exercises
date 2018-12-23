#ifndef SIGNALSLOTS_H
#define SIGNALSLOTS_H

#include <QApplication>
#include <QPushButton>

class SignalSlots:public QWidget
{
private:
    QPushButton *btn1;
public:
    SignalSlots();

};

#endif // SIGNALSLOTS_H
