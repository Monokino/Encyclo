#ifndef ENCYCLOPAGE_H
#define ENCYCLOPAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

class EncycloPage : public QWidget
{

public:

    explicit EncycloPage(QWidget* parent = nullptr);

private:

    QPushButton* playButton_;
    QPushButton* optionsButton_;
    QPushButton* helpButton_;
    QPushButton* googleButton_;
    QPushButton* exitButton_;
};

#endif // ENCYCLOPAGE_H
