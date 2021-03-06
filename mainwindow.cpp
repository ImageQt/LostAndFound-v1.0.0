#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include "lostdialog.h"
#include "founddialog.h"
#include "pubdialog.h"
#include "checkdialog.h"
#include "boarddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    QRect deskRect = QApplication::desktop()->availableGeometry();
    this->setGeometry(deskRect.width()-100-this->width(),100,this->width(),this->height());
    EditStatus=0;
    buttonStatus=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show(){
    ui->lineEditUser->setText(username);
    ui->lineEditName->setText(name);
    ui->lineEditNum->setText(num);
    ui->lineEditAdmin->setText(admin);
    QImage img;
    img.load(":/resources/pic1.jpg");
    img=img.scaled(246,158);
    ui->label_7->setPixmap(QPixmap::fromImage(img));
    if(buttonStatus==0){
        ui->pushButtonCheck->setEnabled(false);
    }
    QMainWindow::show();
}

void MainWindow::leaveEvent(QEvent *e){
    QRect rect=this->geometry();
    QRect deskRect = QApplication::desktop()->availableGeometry();
    if(rect.top()<35&&rect.top()>-400){
        this->move(rect.left(),(-1)*this->height()-20);
    }
    else if(rect.top()<-400){
        return;
    }
}

void MainWindow::enterEvent(QEvent *e){
    QRect rect=this->geometry();
    QRect deskRect = QApplication::desktop()->availableGeometry();
    if(rect.top()<-400){
        this->move(rect.left(),6);
    }
}

void MainWindow::on_pushButtonEdit_clicked()
{
    EditStatus=1;
    ui->lineEditAdmin->setReadOnly(false);
    ui->lineEditName->setReadOnly(false);
    ui->lineEditNum->setReadOnly(false);
    ui->lineEditUser->setReadOnly(false);
}

void MainWindow::on_pushButtonSave_clicked()
{
    if(EditStatus==0) return;
    name=ui->lineEditName->text();
    num=ui->lineEditNum->text();
    username=ui->lineEditUser->text();
    admin=ui->lineEditAdmin->text();
    ui->lineEditUser->setText(username);
    ui->lineEditName->setText(name);
    ui->lineEditNum->setText(num);
    ui->lineEditAdmin->setText(admin);
    ui->lineEditAdmin->setReadOnly(true);
    ui->lineEditName->setReadOnly(true);
    ui->lineEditNum->setReadOnly(true);
    ui->lineEditUser->setReadOnly(true);
    EditStatus=0;
}

void MainWindow::on_pushButtonLost_clicked()
{
    LostDialog *l=new LostDialog();
    l->setModal(false);
    l->show();
}

void MainWindow::on_pushButtonFound_clicked()
{
    FoundDialog *l=new FoundDialog();
    l->setModal(false);
    l->show();
}

void MainWindow::on_pushButtonPub_clicked()
{
    PubDialog *p=new PubDialog();
    p->setModal(false);
    p->show();
}

void MainWindow::on_pushButtonCheck_clicked()
{
    CheckDialog *c=new CheckDialog();
    c->setModal(false);
    c->show();
}

void MainWindow::on_pushButtonBoard_clicked()
{
    BoardDialog *b=new BoardDialog();
    b->setModal(false);
    b->show();
}
