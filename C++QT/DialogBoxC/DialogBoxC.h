#ifndef DIALOGBOXC_H
#define DIALOGBOXC_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QLabel>
#include <QFont>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QColor>

class DialogBoxC:public QWidget
{
    Q_OBJECT
public:
    DialogBoxC();
public slots:
    void message();
    void inputMessage();
    void fontDialog();
    void colorDialog();
    void fileDialog();
private:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;

    QLabel *lbl1;
};

#endif // DIALOGBOXC_H
