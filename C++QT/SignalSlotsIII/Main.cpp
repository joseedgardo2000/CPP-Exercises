#include <QApplication>
#include "SignalSlotsIII.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    SignalSlotsIII ss;
    ss.show();
    return app.exec();
}
