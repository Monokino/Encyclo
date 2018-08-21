#include "ExistingUserWidget.h"
#include "Helper.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

#include <QStackedWidget>

ExistingUserWidget::ExistingUserWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    usernameLabel_ = new QLabel("Username", this);
    usernameLabel_->setGeometry(QRect(60, 200, 130, 35));
    usernameEdit_ = new QLineEdit(this);
    usernameEdit_->setGeometry(QRect(210, 205, 130, 25));


    passwordLabel_ = new QLabel("Password", this);
    passwordLabel_->setGeometry(QRect(60, 258, 130, 35));
    passwordEdit_ = new QLineEdit(this);
    passwordEdit_->setGeometry(QRect(210, 263, 130, 25));


    backButton_ = new QPushButton("Back", this);
    backButton_->setGeometry(60, 320, 130, 35);

    confirmButton_ = new QPushButton("Confirm", this);
    confirmButton_->setGeometry(210, 320, 130, 35);

    connect(backButton_, SIGNAL(clicked(bool)), this, SLOT(goLoginUserWidget()));
    connect(confirmButton_, SIGNAL(clicked(bool)), this, SLOT(goEncycloWidget()));

}

void ExistingUserWidget::goLoginUserWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}


void ExistingUserWidget::goEncycloWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
}
