#ifndef MBOX_H
#define MBOX_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

class MBox:public QWidget
{
    Q_OBJECT
private:
    QPushButton *btn1;
public:
    MBox();
public slots:
    void Message();
};

#endif // MBOX_H
