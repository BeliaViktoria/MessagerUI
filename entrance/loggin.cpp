#include "loggin.h"
#include "ui_loggin.h"

Loggin::Loggin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Loggin)
{
    ui->setupUi(this);
}

Loggin::~Loggin()
{
    delete ui;
}

void Loggin::display()
{
    ui->EnterLog->setText("");
    ui->EnterPass->setText("");
    this->show();
}

QString Loggin::GetLoggin()
{
    return loggin;
}

QString Loggin::GetPassword()
{
    return password;
}

void Loggin::on_EnterLog_textEdited(const QString &arg1)
{
    loggin = arg1;
}


void Loggin::on_EnterPass_textEdited(const QString &arg1)
{
    password = arg1;
}


void Loggin::on_LogIn_button_clicked()
{
    if(loggin == "user" && password == "1234")
    {
        emit loggin_signal();
    }
}


void Loggin::on_sign_up_clicked()
{
    emit signup_window_signal();
}

