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

    connect(newUserButton_, SIGNAL(clicked(bool)), this, SLOT(goAccountSettingsWidget()));

}

void LoginUserWidget::goAccountSettingsWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::AccountSettingsWidget));
}
