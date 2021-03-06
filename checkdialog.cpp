#include "checkdialog.h"
#include "ui_checkdialog.h"
#include <QStandardItemModel>
#include "checkindialog.h"

CheckDialog::CheckDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckDialog)
{
    ui->setupUi(this);
    check_model=new QStandardItemModel();
    check_model->setHorizontalHeaderItem(0,new QStandardItem(QStringLiteral("物品名称")));
    check_model->setHorizontalHeaderItem(1,new QStandardItem(QStringLiteral("物品说明")));
    check_model->setHorizontalHeaderItem(2,new QStandardItem(QStringLiteral("校区")));
    check_model->setHorizontalHeaderItem(3,new QStandardItem(QStringLiteral("详细地点")));
    check_model->setHorizontalHeaderItem(4,new QStandardItem(QStringLiteral("发布日期")));
    check_model->setHorizontalHeaderItem(5,new QStandardItem(QStringLiteral("保管地点/联系电话")));
    check_model->setHorizontalHeaderItem(6,new QStandardItem(QStringLiteral("发布类型")));
    ui->tableView->setModel(check_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
}

CheckDialog::~CheckDialog()
{
    delete ui;
}

void CheckDialog::on_pushButton_clicked()
{
    this->close();
}

void CheckDialog::on_pushButton_2_clicked()
{
    CheckinDialog c;
    c.name=name;
    c.des=des;
    c.place=place;
    c.address=address;
    c.com=com;
    c.type=type;
    c.exec();
}

void CheckDialog::on_tableView_clicked(const QModelIndex &index)
{
    int row=index.row();
    name=check_model->item(row,0)->text();
    des=check_model->item(row,1)->text();
    place=check_model->item(row,2)->text();
    address=check_model->item(row,3)->text();
    date=check_model->item(row,4)->text();
    com=check_model->item(row,5)->text();
    type=check_model->item(row,6)->text();
}
