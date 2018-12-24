#include <QApplication>
#include "SignalSlotsII.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    SignalSlotsII ss;
    ss.show();
    return app.exec();
}
