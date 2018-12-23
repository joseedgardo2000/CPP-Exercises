#include "signalslots.h"

SignalSlots::SignalSlots():QWidget()
{
    this->setFixedSize(300,300);
    btn1 = new QPushButton(this);
    btn1->setText("Cancel");
    this->connect(btn1,SIGNAL(clicked()), qApp, SLOT(quit()));



}
