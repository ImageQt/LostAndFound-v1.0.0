#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include <QTextCodec>

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    QImage img;
    img.load(":/resources/Lost_And_Found.ico");
    ui->label->setPixmap(QPixmap::fromImage(img));
    QString text;
    text=QStringLiteral("武汉大学失物招领系统 v1.0.0\n作者：刘丁维 祝琳 徐涵 史翔宇");
    ui->textBrowser->setText(text);
    this->setFixedSize(this->size());
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_pushButton_clicked()
{
    this->close();
}
