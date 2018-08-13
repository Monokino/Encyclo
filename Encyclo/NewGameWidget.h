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

    QPushButton* menuButton_;

    QStackedWidget* pagesWidget_;

private slots:

    void goEncycloWidget();
};

#endif // NEWGAME_H
