#include "EncycloPage.h"

EncycloPage::EncycloPage(QStackedWidget* stackedWidget, QWidget* parent) : BaseWidget(parent)
{
    this->stackedWidget = stackedWidget;

    playButton_ = new QPushButton("Play", this);
    playButton_->setGeometry(QRect(135, 210, 130, 35));

    optionsButton_ = new QPushButton("Options", this);
    optionsButton_->setGeometry(QRect(135, 270, 130, 35));

    helpButton_ = new QPushButton("Help", this);
    helpButton_->setGeometry(QRect(135, 330, 130, 35));

    googleButton_ = new QPushButton("Google+", this);
    googleButton_->setGeometry(QRect(135, 390, 130, 35));

    exitButton_ = new QPushButton("Exit", this);
    exitButton_->setGeometry(QRect(135, 450, 130, 35));

    QList<QPushButton*> buttonsList;
    buttonsList << playButton_ << optionsButton_
                << helpButton_ << googleButton_ << exitButton_;

    foreach(auto button, buttonsList)
    {
        button->setFont(QFont("Bell MT", 16, QFont::Bold, false));
        button->setStyleSheet("QPushButton: {color: #000000;"
                              "border: 2px solid #363636; "
                              "border-radius: 10px;"
                              "background-color: #FFFFFF;"
                              "}");
    }

    connect(playButton_, SIGNAL(clicked()), this, SLOT(createNewGamePage()));
}

void EncycloPage::createNewGamePage()
{

}
