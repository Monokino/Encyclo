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

private:

    QStackedWidget* pagesWidget_;

private slots:

    void SetCurrentPage(int n);
};

#endif // GAME_H
