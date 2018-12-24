#include <QApplication>
#include "DialogBoxC.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    DialogBoxC db;
    db.show();
    return app.exec();
}
