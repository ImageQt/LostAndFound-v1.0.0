#include "pubdialog.h"
#include "ui_pubdialog.h"

PubDialog::PubDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PubDialog)
{
    ui->setupUi(this);
    ui->comboBoxType->addItem(QStringLiteral("我拾获了物品"));
    ui->comboBoxType->addItem(QStringLiteral("我遗失了物品"));
    ui->comboBoxPlace->addItem(QStringLiteral("文理学部"));
    ui->comboBoxPlace->addItem(QStringLiteral("信息学部"));
    ui->comboBoxPlace->addItem(QStringLiteral("工学部"));
    ui->comboBoxPlace->addItem(QStringLiteral("医学部"));
}

PubDialog::~PubDialog()
{
    delete ui;
}

void PubDialog::on_pushButtonQuit_clicked()
{
    this->close();
}

void PubDialog::on_pushButtonPub_clicked()
{
    type=ui->comboBoxType->currentIndex();
    place=ui->comboBoxPlace->currentIndex();
    name=ui->lineEditName->text();
    des=ui->textEditDes->toPlainText();
    address=ui->textEditPlace->toPlainText();
    com=ui->lineEditCom->text();
    this->close();
}
