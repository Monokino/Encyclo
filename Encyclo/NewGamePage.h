#ifndef NEWGAME_H
#define NEWGAME_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class NewGamePage : public QWidget
{

public:

    explicit NewGamePage(QWidget* parent = nullptr);

private:

    QPushButton* encycloLabel_;
};

#endif // NEWGAME_H
