#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::display()
{
    ui->EnterLog->setText("");
    ui->EnterPass->setText("");
    ui->RepeatPass->setText("");
    this->show();
}

QString SignUp::GetLoggin()
{
    return loggin;
}

QString SignUp::GetPassword()
{
    return password;
}

void SignUp::on_EnterLog_textEdited(const QString &arg1)
{
    loggin = arg1;
}


void SignUp::on_EnterPass_textEdited(const QString &arg1)
{
    password = arg1;
}


void SignUp::on_RepeatPass_textEdited(const QString &arg1)
{
    copy_password = arg1;
}


void SignUp::on_SignUp_button_clicked()
{
    if(copy_password == password)
    {
        emit signup_signal();
    }
}


void SignUp::on_login_clicked()
{
    emit loggin_window_signal();
}

