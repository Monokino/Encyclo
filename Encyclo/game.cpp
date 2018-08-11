#include <QStackedWidget>

#include "game.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    pagesWidget_ = new StackedWidget;
    this->setCentralWidget(pagesWidget_);
    this->setFixedSize(400, 600);
}

Game::~Game()
{
    delete pagesWidget_;
}
