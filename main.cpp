#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog dlg;
    w.show();
//    if(dlg.exec() == QDialog::Accepted)
//    {
//        w.show();
//        return a.exec();
//    }
    return a.exec();

}
