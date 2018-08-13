#ifndef ENCYCLOPAGE_H
#define ENCYCLOPAGE_H

#include <QWidget>

class QLabel;
class QPushButton;
class QStackedWidget;

class EncycloWidget : public QWidget
{
    Q_OBJECT

public:

    explicit EncycloWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* playButton_;
    QPushButton* optionsButton_;
    QPushButton* helpButton_;
    QPushButton* googleButton_;
    QPushButton* exitButton_;

    QStackedWidget* pagesWidget_;

private slots:

    void goNewGameWidget();
};

#endif // ENCYCLOPAGE_H
