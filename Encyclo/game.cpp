#include "game.h"
#include "EncycloPage.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    this->pagesWidget_ = new QStackedWidget;
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);

    pagesWidget_->addWidget(new EncycloPage(pagesWidget_));
}

Game::~Game()
{
    delete pagesWidget_;
}
