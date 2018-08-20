#include "AccountSettingsWidget.h"
#include "Helper.h"

#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QStackedWidget>
#include <QCheckBox>
#include <QPushButton>

AccountSettingsWidget::AccountSettingsWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    emailLabel_ = new QLabel("Email", this);
    emailLabel_->setGeometry(QRect(60, 150, 130, 35));

    usernameLabel_ = new QLabel("Username", this);
    usernameLabel_->setGeometry(QRect(60, 208, 130, 35));

    countryLabel_ = new QLabel("Country", this);
    countryLabel_->setGeometry(QRect(60, 266, 130, 35));

    passwordLabel_ = new QLabel("Password", this);
    passwordLabel_->setGeometry(QRect(60, 324, 130, 35));

    repasswordLabel_ = new QLabel("Repeat password", this);
    repasswordLabel_->setGeometry(QRect(60, 382, 130, 35));

    emailEdit_ = new QLineEdit(this);
    emailEdit_->setGeometry(QRect(210, 150, 130, 30));

    usernameEdit_ = new QLineEdit(this);
    usernameEdit_->setGeometry(QRect(210, 208, 130, 30));

    countryCombobox_ = new QComboBox(this);
    countryCombobox_->setGeometry(QRect(210, 266, 130, 30));

    QStringList countryList;
    countryList << "Ukraine" << "USA" << "Great Britain";
    countryCombobox_->addItems(countryList);

    passwordEdit_ = new QLineEdit(this);
    passwordEdit_->setGeometry(QRect(210, 324, 130, 30));

    repasswordEdit_ = new QLineEdit(this);
    repasswordEdit_->setGeometry(QRect(210, 382, 130, 30));

    agreeCheckBox_ = new QCheckBox(this);
    agreeCheckBox_->setGeometry(QRect(60, 420, 15, 15));
    agreeLabel_ = new QLabel("I agree with lisence agreements", this);
    agreeLabel_->setGeometry(QRect(75, 410, 200, 35));

    backButton_ = new QPushButton("Back", this);
    backButton_->setGeometry(60, 450, 130, 35);

    confirmButton_ = new QPushButton("Confirm", this);
    confirmButton_->setGeometry(210, 450, 130, 35);

    connect(backButton_, SIGNAL(clicked(bool)), this, SLOT(goLoginUserWidget()));
    connect(confirmButton_, SIGNAL(clicked(bool)), this, SLOT(goEncycloWidget()));

}

void AccountSettingsWidget::goLoginUserWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}

void AccountSettingsWidget::goEncycloWidget()
{
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
}
