#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->passwrdLineEdit->setEchoMode(QLineEdit::Password);
    ui->usrLineEdit->setPlaceholderText("lol, your username");
    ui->passwrdLineEdit->setPlaceholderText("lol, your password");
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text()=="heihei"&&
            ui->passwrdLineEdit->text()=="123456")
    {
        accept();
    }
    else
    {
        QMessageBox::warning(this, "Warning", "name or password error!", QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->passwrdLineEdit->clear();
        ui->usrLineEdit->setFocus();

    }
}
