#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QTabWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QProgressBar>
#include <QSlider>
#include <QDir>
#include <QPixmap>
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout<<"Current Path: "<<QDir::currentPath().toStdString()<<std::endl;
    QApplication app(argc, argv);
    QWidget mainWin;
    QTabWidget *tab = new QTabWidget(&mainWin);
    QWidget  *p1 = new QWidget();
    QWidget  *p2 = new QWidget();
    QLabel  *p3 = new QLabel();

    tab->setGeometry(30,20,240,160);
    //------- Page 1 -------//
    QLineEdit *lineEdit = new QLineEdit("Name: ");
    QPushButton *b1 = new QPushButton("Ok");
    QPushButton *b2 = new QPushButton("Cancel");
    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->addWidget(lineEdit);
    vLayout->addWidget(b1);
    vLayout->addWidget(b2);
    p1->setLayout(vLayout);
    //------- Page 2 -------//
    QProgressBar *progress = new QProgressBar();
    QSlider *slider = new QSlider(Qt::Horizontal);
    QPushButton *b3 = new QPushButton("Validate");
    QVBoxLayout *vLayout2 = new QVBoxLayout();
    progress->setValue(50);
    vLayout2->addWidget(progress);
    vLayout2->addWidget(slider);
    vLayout2->addWidget(b3);
    p2->setLayout(vLayout2);
    //------- Page 3 -------//
    p3->setPixmap(QPixmap("puente.jpg"));
    p3->setAlignment(Qt::AlignCenter);
    //------- Tabs   -------//
    tab->addTab(p1, "Options");
    tab->addTab(p2, "Continue");
    tab->addTab(p3, "Image");
    mainWin.show();
    return app.exec();
}
