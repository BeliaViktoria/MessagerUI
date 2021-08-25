#ifndef LOGGIN_H
#define LOGGIN_H

#include <QWidget>

namespace Ui {
class Loggin;
}

class Loggin : public QWidget
{
    Q_OBJECT

public:
    explicit Loggin(QWidget *parent = nullptr);
    ~Loggin();
    QString GetLoggin();
    QString GetPassword();
    void display();

signals:
    void loggin_signal();
    void signup_window_signal();

private slots:
    void on_EnterLog_textEdited(const QString &arg1);
    void on_EnterPass_textEdited(const QString &arg1);
    void on_LogIn_button_clicked();
    void on_sign_up_clicked();

private:
    Ui::Loggin *ui;

    QString loggin;
    QString password;
};

#endif // LOGGIN_H
