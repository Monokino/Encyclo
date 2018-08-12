#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"

EncycloWidget::EncycloWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

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

    connect(playButton_, SIGNAL(clicked(bool)), this, SLOT(goNewGameWidget()));
}

void EncycloWidget::goNewGameWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::NewGameWidget));
}
