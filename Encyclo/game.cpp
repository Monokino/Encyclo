#include <QStackedWidget>

#include "Game.h"
#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"
#include "LoginUserWidget.h"
#include "AccountSettingsWidget.h"
#include <ExistingUserWidget.h>

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    this->pagesWidget_ = new QStackedWidget;
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);

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
