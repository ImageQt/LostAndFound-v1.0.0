#ifndef CHECKDIALOG_H
#define CHECKDIALOG_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class CheckDialog;
}

class CheckDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckDialog(QWidget *parent = 0);
    ~CheckDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::CheckDialog *ui;

public:
    QStandardItemModel *check_model;
    QString date,place,type;
    QString name,des,address,com;
};

#endif // CHECKDIALOG_H
