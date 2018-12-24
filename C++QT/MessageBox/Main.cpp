#include <QApplication>
#include "MBox.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    MBox mb;
    mb.show();
    return app.exec();
}
