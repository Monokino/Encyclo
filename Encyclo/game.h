#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QStackedWidget>

class Game : public QMainWindow
{
    Q_OBJECT

public:

    explicit Game(QWidget* parent = nullptr);
    ~Game();

public:

    QStackedWidget* pagesWidget_;
};

#endif // GAME_H
