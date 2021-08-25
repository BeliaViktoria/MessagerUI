#ifndef SEARCHUSER_H
#define SEARCHUSER_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class SearchUser;
}

class SearchUser : public QWidget
{
    Q_OBJECT

public:
    explicit SearchUser(QWidget *parent = nullptr);
    ~SearchUser();
    void display();

signals:
    void start_chat_signal();
    void back_signal();

private slots:
    void on_EnterUser_textEdited(const QString &arg1);

    void on_UsersList_itemClicked(QListWidgetItem *item);

    void on_back_button_clicked();

private:
    Ui::SearchUser *ui;
};

#endif // SEARCHUSER_H
