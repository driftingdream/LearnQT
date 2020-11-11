#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include "logindialog.h"
#include <QDebug>
#include <QAction>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setText("新窗口");
    QAction *openAction = new QAction("&Open", this);
    openAction->setShortcut(QKeySequence("Ctrl+O"));
    ui->menuFile_F->addAction(openAction);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    LoginDialog *dlg = new LoginDialog(this);
    dlg->setModal(true);
    dlg->show();
    qDebug() << "heyhey";



}
