#include <QApplication>
#include "SignalSlots.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    SignalSlots ss;
    ss.show();

    return app.exec();
}
