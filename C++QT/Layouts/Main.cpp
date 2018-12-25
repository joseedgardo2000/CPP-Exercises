#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget mainWin;

    QPushButton btn1("Opt 1", &mainWin);
    QPushButton btn2("Opt 2", &mainWin);
    QPushButton btn3("Opt 3", &mainWin);
    QPushButton btn4("Opt 4", &mainWin);
    QPushButton btn5("Opt 5", &mainWin);

    QVBoxLayout VLayout;
    QHBoxLayout HLayout;

    VLayout.addWidget(&btn1);
    VLayout.addWidget(&btn2);
    VLayout.addWidget(&btn3);
    VLayout.addLayout(&HLayout);

    HLayout.addWidget(&btn4);
    HLayout.addWidget(&btn5);

    mainWin.setLayout(&VLayout);
    mainWin.show();
    return app.exec();
}
