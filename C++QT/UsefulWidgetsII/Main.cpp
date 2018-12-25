#include <QApplication>
#include <QWidget>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QRadioButton>
#include <QComboBox>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget mainWin;
    QCheckBox Study("Study", &mainWin);
    QCheckBox Sleep("Sleep", &mainWin);
    QCheckBox Play("Play", &mainWin);

    QRadioButton Study2("Study", &mainWin);
    QRadioButton Sleep2("Sleep", &mainWin);
    QRadioButton Play2("Play", &mainWin);

    QComboBox list(&mainWin);

    QVBoxLayout vLayout;
    QGroupBox *gbox = new QGroupBox("What do you like", &mainWin);

    QVBoxLayout vLayout2;
    QGroupBox *gbox2 = new QGroupBox("What do you like", &mainWin);

    QVBoxLayout vLayout3;

    QVBoxLayout vLayout4;
    QGroupBox *gbox3 = new QGroupBox("What do you like", &mainWin);

    vLayout.addWidget(&Study);
    vLayout.addWidget(&Sleep);
    vLayout.addWidget(&Play);
    gbox->setLayout(&vLayout);

    vLayout2.addWidget(&Study2);
    vLayout2.addWidget(&Sleep2);
    vLayout2.addWidget(&Play2);
    gbox2->setLayout(&vLayout2);

    vLayout4.addWidget(&list);
    list.addItem("Study");
    list.addItem("Sleep");
    list.addItem("Play");
    gbox3->setLayout(&vLayout4);

    vLayout3.addWidget(gbox);
    vLayout3.addWidget(gbox2);
    vLayout3.addWidget(gbox3);

    mainWin.setLayout(&vLayout3);

    mainWin.show();
    return app.exec();
}
