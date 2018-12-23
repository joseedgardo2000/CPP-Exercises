#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QPushButton btn1("Going to Dance!!!", &window);
    btn1.setGeometry(60,70,180,70);
    window.setFixedSize(300,150);

    window.show();
    return app.exec();
}
