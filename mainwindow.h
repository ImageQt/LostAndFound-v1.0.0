#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void show();
    void leaveEvent(QEvent *);
    void enterEvent(QEvent *);

private:
    Ui::MainWindow *ui;

public:
    QString username,name,num,admin;
    int EditStatus,buttonStatus;
private slots:
    void on_pushButtonEdit_clicked();
    void on_pushButtonSave_clicked();
    void on_pushButtonLost_clicked();
    void on_pushButtonFound_clicked();
    void on_pushButtonPub_clicked();
    void on_pushButtonCheck_clicked();
    void on_pushButtonBoard_clicked();
};

#endif // MAINWINDOW_H
