#include <QStackedWidget>

#include "Game.h"
#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"
#include "LoginUserWidget.h"
#include "AccountSettingsWidget.h"
#include <ExistingUserWidget.h>

//User user1;// = ("adam@i.ua", "Adam", "123", "Ukraine");
//User user2;// = ("eva@gb.net", "Eva", "456", "Great Britain");
//User user3;// = ("enot@usa.com", "Enot", "789", "USA");

//class QList<User>;
//QList <User> userList;// = {user1, user2, user3};

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    this->pagesWidget_ = new QStackedWidget;
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);
    this->setStyleSheet("QStackedWidget {background-image: url(:/source/back.png)}" );

    pagesWidget_->addWidget(new EncycloWidget(pagesWidget_));
    pagesWidget_->addWidget(new NewGameWidget(pagesWidget_));
    pagesWidget_->addWidget(new LoginUserWidget(pagesWidget_));
    pagesWidget_->addWidget(new AccountSettingsWidget(pagesWidget_));
    pagesWidget_->addWidget(new ExistingUserWidget(pagesWidget_));

    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}

Game::~Game()
{
    delete pagesWidget_;
}

