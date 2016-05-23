#ifndef CHECKINDIALOG_H
#define CHECKINDIALOG_H

#include <QDialog>

namespace Ui {
class CheckinDialog;
}

class CheckinDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckinDialog(QWidget *parent = 0);
    ~CheckinDialog();
    int exec();

private slots:
    void on_pushButtonQuit_clicked();

    void on_pushButtonPass_clicked();

    void on_pushButtonDeny_clicked();

private:
    Ui::CheckinDialog *ui;

public:
    QString place,type;
    QString name,des,address,com;
    int CheckStatus;
};

#endif // CHECKINDIALOG_H
