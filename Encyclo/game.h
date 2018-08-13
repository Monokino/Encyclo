#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

class QStackedWidget;

class Game : public QMainWindow
{
public:

    explicit Game(QWidget* parent = nullptr);
    ~Game();

private:

    QStackedWidget* pagesWidget_;
};

#endif // GAME_H
