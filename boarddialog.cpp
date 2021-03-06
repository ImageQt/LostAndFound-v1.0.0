#include "boarddialog.h"
#include "ui_boarddialog.h"
#include "aboutdialog.h"

BoardDialog::BoardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BoardDialog)
{
    ui->setupUi(this);
}

BoardDialog::~BoardDialog()
{
    delete ui;
}

void BoardDialog::on_pushButtonQuit_clicked()
{
    this->close();
}

void BoardDialog::on_pushButtonPub_clicked()
{
    text=ui->textEdit->toPlainText();
    this->close();
}

void BoardDialog::on_pushButton_clicked()
{
    AboutDialog a;
    a.exec();
}
