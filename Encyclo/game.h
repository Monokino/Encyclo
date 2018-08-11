#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

#include "stackedwidget.h"

class Game : public QMainWindow
{
    Q_OBJECT

public:

    explicit Game(QWidget* parent = nullptr);
    ~Game();

private:

    StackedWidget* pagesWidget_;
};

#endif // GAME_H
