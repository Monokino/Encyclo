#ifndef ENCYCLOPAGE_H
#define ENCYCLOPAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

class EncycloPage : public QWidget
{
    Q_OBJECT

public:

    explicit EncycloPage(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* playButton_;
    QPushButton* optionsButton_;
    QPushButton* helpButton_;
    QPushButton* googleButton_;
    QPushButton* exitButton_;

    QStackedWidget* pagesWidget_;

private slots:

    void createNewGamePage();
};

#endif // ENCYCLOPAGE_H
