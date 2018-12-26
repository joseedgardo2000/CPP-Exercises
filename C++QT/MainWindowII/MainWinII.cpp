#include "MainWinII.h"

MainWinII::MainWinII(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QMdiArea;
    setCentralWidget(centralWidget);
    file = menuBar()->addMenu("&File");
    edit = menuBar()->addMenu("&Edit");
    nnew = new QAction("&New", this);
    exit = new QAction("E&xit", this);
    file->addAction(nnew);
    file->addAction(exit);
    connect(exit, SIGNAL(triggered()),qApp, SLOT(quit()));
    recentFile = file->addMenu("&Recent file");
    recentFile->addAction("file1.txt");
    tools=addToolBar("File");
    nnew->setIcon(QIcon("new.png"));
    exit->setIcon(QIcon("exit.png"));
    tools->addAction(nnew);
    tools->addAction(exit);
    fonts=new QFontComboBox;
    tools->addWidget(fonts);
}
