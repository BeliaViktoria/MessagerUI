#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , main_w(new Ui::MainWindow)
{
    connect(&log_w, SIGNAL(loggin_signal()), this, SLOT(loggin()));
    connect(&log_w, SIGNAL(signup_window_signal()), this, SLOT(signup_window()));
    connect(&sign_w, SIGNAL(signup_signal()), this, SLOT(signup()));
    connect(&sign_w, SIGNAL(loggin_window_signal()), this, SLOT(loggin_window()));
    connect(&search_w, SIGNAL(back_signal()), this, SLOT(menu_window()));

    main_w->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete main_w;
}

void MainWindow::display()
{
    log_w.display();
}

void MainWindow::loggin()
{
    loggin_ = log_w.GetLoggin();
    password_ = log_w.GetPassword();
    this->show();
    log_w.close();
    sign_w.close();
}

void MainWindow::signup()
{
    loggin_ = sign_w.GetLoggin();
    password_ = sign_w.GetPassword();
    menu_window();
}

void MainWindow::signup_window()
{
    sign_w.display();
    log_w.close();
}

void MainWindow::loggin_window()
{
    log_w.display();
    sign_w.close();
    this->close();
}

void MainWindow::chats_window()
{

}

void MainWindow::search_user_window()
{
    search_w.display();
    this->close();
}

void MainWindow::menu_window()
{
    this->show();
    log_w.close();
    sign_w.close();
    search_w.close();
}

void MainWindow::on_MenuList_itemClicked(QListWidgetItem *item)
{
    if(item->text() == "Chats")
    {

    }
    else if(item->text() == "Search user")
    {
        search_user_window();
    }
    else if(item->text() == "Exit")
    {
        loggin_window();
    }
}

