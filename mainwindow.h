#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "dialog.h"
#include <QtSql>

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


private:
    Ui::MainWindow *ui;
    //QDialog* d;
    QSqlDatabase* db;
    void InputHost();
    void InputDBName();
    void InputLogin();
    void InputPassword();
    void InputPort();
};
#endif // MAINWINDOW_H
