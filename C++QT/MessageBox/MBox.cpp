#include "MBox.h"

MBox::MBox():QWidget()
{
    btn1 = new QPushButton("Information", this);
    btn1->move(60,70);
    connect(btn1, SIGNAL(clicked()), this, SLOT(Message()));
}

void MBox::Message()
{
    QMessageBox::information(this, "Information",
                             "You are very happy!!!!");
}
