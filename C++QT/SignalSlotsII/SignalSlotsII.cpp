#include "SignalSlotsII.h"

SignalSlotsII::SignalSlotsII():QWidget()
{
    btn1 = new QPushButton("Reveal", this);
    lbl = new QLabel("Here is your text", this);
    lbl->setVisible(false);
    btn1->move(60,70);
    QObject::connect(btn1, SIGNAL(clicked()), this, SLOT(reveal()));
}

void SignalSlotsII::reveal()
{
    lbl->setVisible(true);
}
