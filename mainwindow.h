#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //QMenuBar* menuBar;
    //menuBar()->addAction(actionOpen_dialog);
public slots:
    void openDialog();

private:
    Ui::MainWindow *ui;
    QAction* actionOpen_dialog;
};
#endif // MAINWINDOW_H
