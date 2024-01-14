#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->actionOpen_dialog = new QAction("Open dialog", this);
    connect(ui->actionOpen_dialog, SIGNAL(triggered()), this, SLOT(openDialog()));
}

void MainWindow::openDialog()
{
    Form form;
    int result = form.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
