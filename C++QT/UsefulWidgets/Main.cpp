#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget mainWin;
    QDialog dialog(&mainWin);
    QPushButton btn1("Modal", &mainWin);
    QPushButton btn2("Amodal", &mainWin);

    dialog.setFixedSize(300,150);
    dialog.setModal(false);
    mainWin.setFixedSize(300,150);
    btn1.move(100,70);
    btn1.move(180,70);

    QObject::connect(&btn1, SIGNAL(clicked()), &dialog, SLOT(exec()));
    QObject::connect(&btn2, SIGNAL(clicked()), &dialog, SLOT(show()));

    mainWin.show();
    return app.exec();
}
