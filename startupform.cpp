#include "startupform.h"
#include "ui_startupform.h"

StartupForm::StartupForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartupForm)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QImage img;
    img.load(":/resources/pic1.jpg");
    img=img.scaled(496,347);
    ui->label->setPixmap(QPixmap::fromImage(img));
}

StartupForm::~StartupForm()
{
    delete ui;
}
