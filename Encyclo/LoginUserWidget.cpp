#include <QStackedWidget>
#include <QPushButton>
#include <QApplication>
#include <QLabel>

#include "LoginUserWidget.h"
#include "Helper.h"

LoginUserWidget::LoginUserWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    encycloLabel_ = new QLabel("Encyclo", this);
    encycloLabel_->setGeometry(QRect(75, 90, 250, 85));
    encycloLabel_->setStyleSheet("QLabel {color: #000000;"
                                 "font-family: Bell MT;"
                                 "font-size: 70px;"
                                 "font-weight: bold;"
                                 "}");

    newUserButton_ = new QPushButton("New User", this);
    newUserButton_->setGeometry(QRect(135, 210, 130, 35));

    existingUserButton_ = new QPushButton("Existing User", this);
    existingUserButton_->setGeometry(QRect(135, 270, 130, 35));

    exitButton_ = new QPushButton("Exit", this);
    exitButton_->setGeometry(QRect(135, 330, 130, 35));

    connect(newUserButton_, SIGNAL(clicked(bool)), this, SLOT(goAccountSettingsWidget()));
    connect(existingUserButton_, SIGNAL(clicked(bool)), this, SLOT(goExistingUserWidget()));
    connect(exitButton_, SIGNAL(clicked(bool)), this, SLOT(exitButtonClicked()));

}

void LoginUserWidget::goAccountSettingsWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::AccountSettingsWidget));
}

void LoginUserWidget::goExistingUserWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::ExistingUserWidget));
}

void LoginUserWidget::exitButtonClicked()
{
    QApplication::exit();
}

