#include <QApplication>
#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QPushButton btn("Hellow World!!!!");
    QFont mFont("Arial",QFont::Bold,true);
    QProgressBar progressBar;
    progressBar.setValue(50);
    progressBar.show();
    btn.setFont(mFont);
    btn.setCursor(Qt::PointingHandCursor);
    btn.setText("Begin to Dance!!!!");
    btn.setToolTip("Ready to party???");

    btn.show();
    return app.exec();
}
