#include "checkindialog.h"
#include "ui_checkindialog.h"

CheckinDialog::CheckinDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckinDialog)
{
    ui->setupUi(this);
    CheckStatus=0;
}

CheckinDialog::~CheckinDialog()
{
    delete ui;
}

void CheckinDialog::on_pushButtonQuit_clicked()
{
    this->close();
}

int CheckinDialog::exec(){
    ui->lineEditName->setText(name);
    ui->textBrowserDes->setText(des);
    ui->textBrowserPlace->setText(address);
    ui->lineEditPlace->setText(place);
    ui->lineEditCom->setText(com);
    ui->lineEditType->setText(type);
    return QDialog::exec();
}

void CheckinDialog::on_pushButtonPass_clicked()
{
    CheckStatus=0;
    this->close();
}

void CheckinDialog::on_pushButtonDeny_clicked()
{
    CheckStatus=1;
    this->close();
}
