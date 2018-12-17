#include <QApplication>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QPushButton Btn(" Hello World!!!! ");
    Btn.show();
    return app.exec();
}
