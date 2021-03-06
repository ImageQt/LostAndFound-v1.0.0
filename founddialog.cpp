#include "founddialog.h"
#include "ui_founddialog.h"
#include <QStandardItemModel>

FoundDialog::FoundDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoundDialog)
{
    ui->setupUi(this);
    found_model=new QStandardItemModel();
    found_model->setHorizontalHeaderItem(0,new QStandardItem(QStringLiteral("物品名称")));
    found_model->setHorizontalHeaderItem(1,new QStandardItem(QStringLiteral("物品说明")));
    found_model->setHorizontalHeaderItem(2,new QStandardItem(QStringLiteral("校区")));
    found_model->setHorizontalHeaderItem(3,new QStandardItem(QStringLiteral("详细地点")));
    found_model->setHorizontalHeaderItem(4,new QStandardItem(QStringLiteral("发布日期")));
    found_model->setHorizontalHeaderItem(5,new QStandardItem(QStringLiteral("保管地点/联系电话")));
    ui->tableView->setModel(found_model);
}

FoundDialog::~FoundDialog()
{
    delete ui;
}

void FoundDialog::on_pushButton_2_clicked()
{
    this->close();
}
