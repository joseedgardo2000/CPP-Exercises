#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>

int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    QPushButton btn1(&window);
    QPushButton btn2(&window);
    QProgressBar proBar(&window);

    btn1.setText("Go To Dance!!!");
    btn2.setText("Stop Dancing");
    proBar.setValue(70);
    proBar.setFixedWidth(500);

    btn1.move(50,70);
    btn2.move(150,70);

    window.show();
    return app.exec();
}
