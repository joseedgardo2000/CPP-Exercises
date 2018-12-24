#include "DialogBoxC.h"

DialogBoxC::DialogBoxC():QWidget()
{
    btn1 = new QPushButton("Ask a Question!!!", this);
    btn2 = new QPushButton("Request an Input!!!", this);
    btn3 = new QPushButton("Select Font!!!", this);
    btn4 = new QPushButton("Select Color!!!", this);
    btn5 = new QPushButton("Select File!!!", this);
    lbl1 = new QLabel("Hola a todo el mundo", this);

    btn1->move(10,70);
    btn2->move(120, 70);
    btn3->move(230,70);
    btn4->move(330,70);
    btn5->move(430,70);

    lbl1->setMargin(10);
    lbl1->setScaledContents(true);
    lbl1->resize(450, lbl1->height());
    this->resize(600, 100);

    connect(btn1,SIGNAL(clicked()), this, SLOT(message()));
    connect(btn2,SIGNAL(clicked()), this, SLOT(inputMessage()));
    connect(btn3,SIGNAL(clicked()), this, SLOT(fontDialog()));
    connect(btn4,SIGNAL(clicked()), this, SLOT(colorDialog()));
    connect(btn5,SIGNAL(clicked()), this, SLOT(fileDialog()));
}

void DialogBoxC::message()
{
    int res =
        QMessageBox::question(this, "Question",
                              "Do you want to see movies?",
                              QMessageBox::Yes|
                              QMessageBox::No);
    if(res==QMessageBox::Yes)
    {
        QMessageBox::information(this, "Information",
                                 "You really like see movies"
                                 );
    }
    else
    {
        QMessageBox::information(this, "Information",
                                 "You don't like see movies"
                                 );
    }
}

void DialogBoxC::inputMessage()
{
    bool ok;
    QString str = QInputDialog::getText(this, "Password",
                                        "Write Your Password: ",
                                        QLineEdit::Password,
                                        QString(),
                                        &ok
                                        );
    if(ok && !str.isEmpty())
    {
        QMessageBox::information(this, "Password",
                                 "Your password is: " + str);
    }
    else
    {
        QMessageBox::information(this, "error",
                                 "You have to set a password");
    }

}

void DialogBoxC::fontDialog()
{
    bool ok;
    QFont mFont=QFontDialog::getFont(&ok,lbl1->font(),this,
                                    "Select your font!!!");
    if(ok)
    {
        lbl1->setFont(mFont);
        lbl1->setFixedHeight(50);

    }
}

void DialogBoxC::colorDialog()
{
    QColor color=QColorDialog::getColor(Qt::black,this);
    QPalette palette;
    palette.setColor(QPalette::WindowText, color);
    lbl1->setPalette(palette);
}

void DialogBoxC::fileDialog()
{
    QString folder=
            QFileDialog::getExistingDirectory(
                    this,
                    QString(),
                    QString()
                );
}


