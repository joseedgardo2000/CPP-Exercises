#include "SignalSlotsIII.h"

SignalSlotsIII::SignalSlotsIII():QWidget()
{

    btn1 = new QPushButton("Lets Go To Dance!!!", this);
    btn2 = new QPushButton("take me out from here!!!", this);
    btn3 = new QPushButton("Show the Secret", this);

    lbl1 = new QLabel("We all are sitting :-/", this);
    lbl2 = new QLabel("This is a secret", this);


    btn1->move(60,70);
    btn2->move(340,70);
    btn3->move(200, 70);

    lbl1->setMargin(10);
    lbl1->resize(200, 35);

    lbl2->setMargin(10);
    lbl2->resize(200, 35);
    lbl2->move(0,40);
    lbl2->setHidden(true);

    resize(500,100);

    QObject::connect(btn1, SIGNAL(clicked()), this, SLOT(toDance()));
    QObject::connect(btn2, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(btn3, SIGNAL(clicked()), this, SLOT(reveal()));
    QObject::connect(this, SIGNAL(vislabel()), this, SLOT(showFullScreen()));
    QObject::connect(this, SIGNAL(invlabel()), this, SLOT(showNormal()));

    dancing = false;
}

void SignalSlotsIII::toDance()
{
    if(!dancing){
        lbl1->setText("Now We all are dancing very happy!!!!! :) ");
        btn1->setText("Sit down please!!!");
        dancing = true;
    }
    else
    {
        lbl1->setText("Now We all are sitting very bored!!!!! :) ");
        btn1->setText("Lets Go To Dance!!!");
        dancing = false;
    }

}

void SignalSlotsIII::reveal()
{
    if(lbl2->isHidden()){
        lbl2->setHidden(false);
        btn3->setText("Hide the Secret");
        emit vislabel();
    }
    else
    {
        lbl2->setHidden(true);
        btn3->setText("Show the Secret");
        emit invlabel();
    }
}
