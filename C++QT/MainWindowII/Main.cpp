#include <QApplication>
#include "MainWinII.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    MainWinII mainWin;
    mainWin.show();
    return app.exec();
}
