#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

#include "NewGameWidget.h"
#include "Helper.h"

NewGameWidget::NewGameWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    newGameButton_ = new QPushButton("New Game", this);
    newGameButton_->setGeometry(QRect(135, 310, 130, 35));

    eclopediaButton_ = new QPushButton("Encyclopedia", this);
    eclopediaButton_->setGeometry(60, 370, 130, 35);

    questsButton_ = new QPushButton("Quests", this);
    questsButton_->setGeometry(210, 370, 130, 35);

    achievButton_ = new QPushButton("Achievements", this);
    achievButton_->setGeometry(60, 430, 130, 35);

    rankButton_ = new QPushButton("Rankings", this);
    rankButton_->setGeometry(210, 430, 130, 35);

    backButton_ = new QPushButton("Back", this);
    backButton_->setGeometry(60, 490, 130, 35);

    shopButton_ = new QPushButton("Shop", this);
    shopButton_->setGeometry(210, 490, 130, 35);


    connect(backButton_, SIGNAL(clicked(bool)), this, SLOT(goEncycloWidget()));

}

void NewGameWidget::goEncycloWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
}
