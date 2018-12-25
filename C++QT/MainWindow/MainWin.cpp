#include "MainWin.h"

MainWin::MainWin(QWidget *parent) : QMainWindow(parent)
{
    centralWidget = new QMdiArea;
    line01 = new QLineEdit(centralWidget);
    line02 = new QLineEdit(centralWidget);
    QFormLayout *form = new QFormLayout;
    form->addRow("Line01: ", line01);
    form->addRow("Line02: ", line02);
    centralWidget->setLayout(form);

    sub01 = new QMdiSubWindow;
    sub02 = new QMdiSubWindow;
    sub01->setMinimumSize(200,200);
    sub02->setMinimumSize(200,200);
    centralWidget->addSubWindow(sub01);
    centralWidget->addSubWindow(sub02);

    setCentralWidget(centralWidget);
}
