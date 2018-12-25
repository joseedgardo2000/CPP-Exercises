#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget mainWin;

    QPushButton btn1("Opt 1", &mainWin);
    QPushButton btn2("Opt 2", &mainWin);
    QPushButton btn3("Opt 3", &mainWin);
    QPushButton btn4("Opt 4", &mainWin);
    QPushButton btn5("Opt 5", &mainWin);

    QGridLayout gLayout;

    gLayout.addWidget(&btn1,0,0,2,1,Qt::AlignTop);
    gLayout.addWidget(&btn4,0,1,1,1,Qt::AlignTop);
    gLayout.addWidget(&btn5,1,1,1,1,Qt::AlignTop);

    gLayout.addWidget(&btn2,2,0,1,1,Qt::AlignTop);
    gLayout.addWidget(&btn3,2,1,1,1,Qt::AlignTop);

    mainWin.setLayout(&gLayout);
    mainWin.show();
    return app.exec();
}
