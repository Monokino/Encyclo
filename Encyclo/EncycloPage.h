#ifndef ENCYCLOPAGE_H
#define ENCYCLOPAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

#include "BaseWidget.h"

class EncycloPage : public BaseWidget
{
    Q_OBJECT

public:

    explicit EncycloPage(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

public slots:

    void createNewGamePage();

private:

    QPushButton* playButton_;
    QPushButton* optionsButton_;
    QPushButton* helpButton_;
    QPushButton* googleButton_;
    QPushButton* exitButton_;
};

#endif // ENCYCLOPAGE_H
