#ifndef NEWGAME_H
#define NEWGAME_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

class NewGamePage : public QWidget
{

public:

    explicit NewGamePage(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* encycloLabel_;

    QStackedWidget* pagesWidget_;
};

#endif // NEWGAME_H
