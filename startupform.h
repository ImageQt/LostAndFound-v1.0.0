#ifndef STARTUPFORM_H
#define STARTUPFORM_H

#include <QDialog>

namespace Ui {
class StartupForm;
}

class StartupForm : public QDialog
{
    Q_OBJECT

public:
    explicit StartupForm(QWidget *parent = 0);
    ~StartupForm();

private:
    Ui::StartupForm *ui;
};

#endif // STARTUPFORM_H
