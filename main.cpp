#include "mainwindow.h"
#include "logindialog.h"
#include "startupform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    StartupForm* s=new StartupForm();
    s->show();
    LoginDialog l;
    l.exec();
    s->close();
    if(l.loginstatus==1){
        if(l.username=="admin"){
            w.username=l.username;
            w.name=QStringLiteral("一号管理员");
            w.num=QStringLiteral("130102568977");
            w.admin=QStringLiteral("管理员帐户");
            w.buttonStatus=1;
        }
        else if(l.username=="stu"){
            w.username=l.username;
            w.name=QStringLiteral("某位学生");
            w.num=QStringLiteral("195563844695");
            w.admin=QStringLiteral("学生帐户");
            w.buttonStatus=0;
        }
        w.show();
    }
    else return 0;
    return a.exec();
}
