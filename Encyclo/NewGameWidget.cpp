#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>

#include "NewGameWidget.h"
#include "Helper.h"

NewGameWidget::NewGameWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;
    menuButton_ = new QPushButton("Menu", this);
    menuButton_->setGeometry(50,50,100,100);
    menuButton_->show();

    connect(menuButton_, SIGNAL(clicked(bool)), this, SLOT(goEncycloWidget()));
}

void NewGameWidget::goEncycloWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
}
