#ifndef NEWGAME_H
#define NEWGAME_H

#include <QWidget>

class QLabel;
class QPushButton;
class QStackedWidget;

class NewGameWidget : public QWidget
{

    Q_OBJECT

public:

    explicit NewGameWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* newGameButton_;
    QPushButton* eclopediaButton_;
    QPushButton* backButton_;
    QPushButton* questsButton_;
    QPushButton* achievButton_;
    QPushButton* rankButton_;
    QPushButton* shopButton_;


    QStackedWidget* pagesWidget_;

private slots:

    void goEncycloWidget();
};

#endif // NEWGAME_H
