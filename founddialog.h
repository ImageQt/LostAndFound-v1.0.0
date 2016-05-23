#ifndef FOUNDDIALOG_H
#define FOUNDDIALOG_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class FoundDialog;
}

class FoundDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FoundDialog(QWidget *parent = 0);
    ~FoundDialog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::FoundDialog *ui;

public:
    QStandardItemModel *found_model;
};

#endif // FOUNDDIALOG_H
