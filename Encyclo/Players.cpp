#include "Players.h"

QList<Players> Players::userList = {
    Players("adam@i.ua", "Adam", "123", "Ukraine"),
    Players("eva@gb.net", "Eva", "456", "Great Britain"),
    Players("enot@usa.com", "Enot", "789", "USA")
};

Players::Players()
{

}

Players::Players(const QString& email, const QString& login, const QString& password, const QString& country)
{
    email_ = email;
    login_ = login;
    password_ = password;
    country_ = country;
};
