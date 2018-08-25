#ifndef PLAYERS_H
#define PLAYERS_H

#include <QList>

class QString;

class Players
{

public:

    QString email_;
    QString login_;
    QString password_;
    QString country_;

public:
    Players();
    Players(const QString& email, const QString& login, const QString& password, const QString& country);

    static QList<Players> userList;
};

#endif // PLAYERS_H
