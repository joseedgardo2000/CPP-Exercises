#ifndef MAINWINII_H
#define MAINWINII_H

#include <QApplication>
#include <QMainWindow>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QIcon>
#include <QFontComboBox>

class MainWinII : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWinII(QWidget *parent = nullptr);
public slots:
signals:
private:
    QMdiArea *centralWidget;
    QMenu *file;
    QMenu *edit;
    QMenu *recentFile;
    QAction *nnew;
    QAction *exit;
    QToolBar *tools;
    QFontComboBox *fonts;
};

#endif // MAINWINII_H
