#include "lostdialog.h"
#include "ui_lostdialog.h"
#include <QStandardItemModel>

LostDialog::LostDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LostDialog)
{
    ui->setupUi(this);
    lost_model=new QStandardItemModel();
    lost_model->setHorizontalHeaderItem(0,new QStandardItem(QStringLiteral("物品名称")));
    lost_model->setHorizontalHeaderItem(1,new QStandardItem(QStringLiteral("物品说明")));
    lost_model->setHorizontalHeaderItem(2,new QStandardItem(QStringLiteral("校区")));
    lost_model->setHorizontalHeaderItem(3,new QStandardItem(QStringLiteral("详细地点")));
    lost_model->setHorizontalHeaderItem(4,new QStandardItem(QStringLiteral("发布日期")));
    lost_model->setHorizontalHeaderItem(5,new QStandardItem(QStringLiteral("保管地点/联系电话")));
    ui->tableView->setModel(lost_model);
}

LostDialog::~LostDialog()
{
    delete ui;
}

void LostDialog::on_pushButtonQuit_clicked()
{
    this->close();
}
