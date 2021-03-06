#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QDateTime>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    loginstatus=0;
    this->setFixedSize(this->size());
    QDateTime n=QDateTime::currentDateTime();
    QDateTime now;
    do{
        now=QDateTime::currentDateTime();
        QCoreApplication::processEvents();
    } while (n.secsTo(now)<=1);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButtonLogin_clicked()
{
    username=ui->lineEditUser->text();
    key=ui->lineEditKey->text();
    if(username==tr("admin")&&key==tr("admin")){
        loginstatus=1;
        this->close();
    }
    else if(username==tr("stu")&&key==tr("stu")){
        loginstatus=1;
        this->close();
    }
    else{
        ui->labelStatus->setStyleSheet("color:red;");
        ui->labelStatus->setText(QStringLiteral("用户名或密码错误!"));
    }
}

void LoginDialog::on_pushButtonQuit_clicked()
{
    loginstatus=0;
    this->close();
}
