#include <QStackedWidget>
#include <QPushButton>

#include "LoginUserWidget.h"
#include "Helper.h"

LoginUserWidget::LoginUserWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    newUserButton_ = new QPushButton("New User", this);
    newUserButton_->setGeometry(QRect(135, 210, 130, 35));

    existingUserButton_ = new QPushButton("Existing User", this);
    existingUserButton_->setGeometry(QRect(135, 270, 130, 35));

    exitButton_ = new QPushButton("Exit", this);
    exitButton_->setGeometry(QRect(135, 330, 130, 35));

    connect(newUserButton_, SIGNAL(clicked(bool)), this, SLOT(goAccountSettingsWidget()));
    connect(existingUserButton_, SIGNAL(clicked(bool)), this, SLOT(goExistingUserWidget()));

}

void LoginUserWidget::goAccountSettingsWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::AccountSettingsWidget));
}

void LoginUserWidget::goExistingUserWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::ExistingUserWidget));
}
