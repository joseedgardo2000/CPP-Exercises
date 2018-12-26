#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PRC = new QProgressBar(this);
    PRC->setValue(50);
}

MainWindow::~MainWindow()
{
    delete ui;
}
