#ifndef BOARDDIALOG_H
#define BOARDDIALOG_H

#include <QDialog>

namespace Ui {
class BoardDialog;
}

class BoardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BoardDialog(QWidget *parent = 0);
    ~BoardDialog();

private slots:
    void on_pushButtonQuit_clicked();

    void on_pushButtonPub_clicked();

    void on_pushButton_clicked();

private:
    Ui::BoardDialog *ui;

public:
    QString text;
};

#endif // BOARDDIALOG_H
