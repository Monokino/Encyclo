#include <QStackedWidget>

#include "Game.h"
#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"
#include "loginuserwidget.h"
#include "AccountSettingsWidget.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    this->pagesWidget_ = new QStackedWidget();
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);

    pagesWidget_->addWidget(new EncycloWidget(pagesWidget_, this));
    pagesWidget_->addWidget(new NewGameWidget(pagesWidget_, this));
    pagesWidget_->addWidget(new LoginUserWidget(pagesWidget_, this));
    pagesWidget_->addWidget(new AccountSettingsWidget(pagesWidget_, this));

    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}

Game::~Game()
{
    delete pagesWidget_;
}
