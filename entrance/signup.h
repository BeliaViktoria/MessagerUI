#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    QString GetLoggin();
    QString GetPassword();
    void display();

signals:
    void signup_signal();
    void loggin_window_signal();

private slots:
    void on_EnterLog_textEdited(const QString &arg1);
    void on_EnterPass_textEdited(const QString &arg1);
    void on_RepeatPass_textEdited(const QString &arg1);
    void on_SignUp_button_clicked();
    void on_login_clicked();

private:
    Ui::SignUp *ui;

    QString loggin;
    QString password;
    QString copy_password;
};

#endif // SIGNUP_H
