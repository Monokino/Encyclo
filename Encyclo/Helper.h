#ifndef HELPER_H
#define HELPER_H

class QString;

enum class WidgetType
{
    EncycloWidget = 0,
    NewGameWidget = 1,
    LoginUserWidget,
    AccountSettingsWidget,
    ExistingUserWidget
};

struct User
{

private:

    QString email_;
    QString login_;
    QString password_;
    QString country_;

public:

    User(QString email, QString login, QString password, QString country)
    {
        email_ = email;
        login_ = login;
        password_ = password;
        country_ = country;
    }

    ~User();
};

#endif // HELPER_H
