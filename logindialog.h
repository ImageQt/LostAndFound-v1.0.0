#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonQuit_clicked();

private:
    Ui::LoginDialog *ui;

public:
    int loginstatus;
    QString username,key;

};

#endif // LOGINDIALOG_H
