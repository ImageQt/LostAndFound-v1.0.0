#ifndef PUBDIALOG_H
#define PUBDIALOG_H

#include <QDialog>

namespace Ui {
class PubDialog;
}

class PubDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PubDialog(QWidget *parent = 0);
    ~PubDialog();

private slots:
    void on_pushButtonQuit_clicked();

    void on_pushButtonPub_clicked();

private:
    Ui::PubDialog *ui;

public:
    int type,place;
    QString name,des,address,com;
};

#endif // PUBDIALOG_H
