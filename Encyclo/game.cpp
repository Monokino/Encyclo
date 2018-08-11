#include "game.h"

Game::Game(QWidget* parent) : QMainWindow(parent)
{
    widget_ = new StackedWidget(this);
    this->setCentralWidget(widget_);
}

Game::~Game()
{
    delete widget_;
}
