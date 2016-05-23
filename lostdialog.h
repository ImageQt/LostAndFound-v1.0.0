#ifndef LOSTDIALOG_H
#define LOSTDIALOG_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class LostDialog;
}

class LostDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LostDialog(QWidget *parent = 0);
    ~LostDialog();

private slots:
    void on_pushButtonQuit_clicked();

private:
    Ui::LostDialog *ui;

public:
    QStandardItemModel *lost_model;
};

#endif // LOSTDIALOG_H
