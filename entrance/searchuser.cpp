#include "searchuser.h"
#include "ui_searchuser.h"

SearchUser::SearchUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchUser)
{
    ui->setupUi(this);
}

SearchUser::~SearchUser()
{
    delete ui;
}

void SearchUser::display()
{
    ui->EnterUser->setText("");
    ui->UsersList->clear();
    this->show();

}

void SearchUser::on_EnterUser_textEdited(const QString &arg1)
{
    if(arg1 == "user")
    {
        ui->UsersList->addItem("user");
    }
}


void SearchUser::on_UsersList_itemClicked(QListWidgetItem *item)
{
    //emit start_chat_signal();
}


void SearchUser::on_back_button_clicked()
{
    emit back_signal();
}

