#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

#include "EncycloWidget.h"
#include "NewGameWidget.h"
#include "Helper.h"

EncycloWidget::EncycloWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    encycloLabel_ = new QLabel("Encyclo", this);
    encycloLabel_->setGeometry(QRect(75, 90, 250, 85));
    encycloLabel_->setStyleSheet("QLabel {color: #000000;"
                                 "font-family: Bell MT;"
                                 "font-size: 70px;"
                                 "font-weight: bold;"
                                 "}");


    playButton_ = new QPushButton("Play", this);
    playButton_->setGeometry(QRect(135, 210, 130, 35));

    optionsButton_ = new QPushButton("Options", this);
    optionsButton_->setGeometry(QRect(135, 270, 130, 35));

    helpButton_ = new QPushButton("Help", this);
    helpButton_->setGeometry(QRect(135, 330, 130, 35));

    googleButton_ = new QPushButton("Google+", this);
    googleButton_->setGeometry(QRect(135, 390, 130, 35));

    exitButton_ = new QPushButton("Change player", this);
    exitButton_->setGeometry(QRect(135, 450, 130, 35));

    connect(playButton_, SIGNAL(clicked(bool)), this, SLOT(goNewGameWidget()));
    connect(exitButton_, SIGNAL(clicked(bool)), this, SLOT(goLoginUserWidget()));
}

void EncycloWidget::goNewGameWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::NewGameWidget));
}

void EncycloWidget::goLoginUserWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}
