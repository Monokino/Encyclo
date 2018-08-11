#include <QStackedWidget>

#include "game.h"
#include "EncycloPage.h"
#include "NewGamePage.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    pagesWidget_ = new QStackedWidget(this);
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);

    pagesWidget_->addWidget(new EncycloPage(pagesWidget_));
    pagesWidget_->addWidget(new NewGamePage(pagesWidget_));
}

Game::~Game()
{
    delete pagesWidget_;
}

void Game::SetCurrentPage(int n)
{
    pagesWidget_->setCurrentIndex(n);
}
