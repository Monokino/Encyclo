#include "Game.h"
#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    this->pagesWidget_ = new QStackedWidget;
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);

    pagesWidget_->addWidget(new EncycloWidget(pagesWidget_));
    pagesWidget_->addWidget(new NewGameWidget(pagesWidget_));

    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
}

Game::~Game()
{
    delete pagesWidget_;
}
