#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>
#include <QFormLayout>
#include <QMdiArea>
#include <QMdiSubWindow>

class MainWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWin(QWidget *parent = nullptr);
public slots:
signals:
private:
    QMdiArea *centralWidget;
    QMdiSubWindow *sub01;
    QMdiSubWindow *sub02;
    QLineEdit *line01;
    QLineEdit *line02;
};

#endif // MAINWIN_H
