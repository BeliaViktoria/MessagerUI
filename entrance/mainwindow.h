#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "loggin.h"
#include "signup.h"
#include "searchuser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();

private slots:
    void loggin();
    void signup();
    void signup_window();
    void loggin_window();
    void menu_window();
    void chats_window();
    void search_user_window();

    void on_MenuList_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *main_w;
    Loggin log_w;
    SignUp sign_w;
    SearchUser search_w;

    QString loggin_;
    QString password_;
};
#endif // MAINWINDOW_H
