#include "AccountSettingsWidget.h"
#include "Helper.h"

#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QStackedWidget>
#include <QCheckBox>
#include <QPushButton>
#include <QMessageBox>

AccountSettingsWidget::AccountSettingsWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    emailLabel_ = new QLabel("Email", this);
    emailLabel_->setGeometry(QRect(60, 130, 130, 35));
    emailEdit_ = new QLineEdit(this);
    emailEdit_->setGeometry(QRect(210, 135, 130, 25));

    usernameLabel_ = new QLabel("Username", this);
    usernameLabel_->setGeometry(QRect(60, 188, 130, 35));
    usernameEdit_ = new QLineEdit(this);
    usernameEdit_->setGeometry(QRect(210, 193, 130, 25));

    countryLabel_ = new QLabel("Country", this);
    countryLabel_->setGeometry(QRect(60, 246, 130, 35));
    countryCombobox_ = new QComboBox(this);
    countryCombobox_->setGeometry(QRect(210, 251, 130, 25));

    passwordLabel_ = new QLabel("Password", this);
    passwordLabel_->setGeometry(QRect(60, 304, 130, 35));
    passwordEdit_ = new QLineEdit(this);
    passwordEdit_->setGeometry(QRect(210, 309, 130, 25));
    passwordEdit_->setEchoMode(QLineEdit::Password);

    repasswordLabel_ = new QLabel("Repeat password", this);
    repasswordLabel_->setGeometry(QRect(60, 362, 130, 35));
    repasswordEdit_ = new QLineEdit(this);
    repasswordEdit_->setGeometry(QRect(210, 367, 130, 25));
    repasswordEdit_->setEchoMode(QLineEdit::Password);


    QStringList countryList;
    countryList << "Ukraine" << "USA" << "Great Britain";
    countryCombobox_->addItems(countryList);


    agreeCheckBox_ = new QCheckBox(this);
    agreeCheckBox_->setGeometry(QRect(65, 410, 15, 15));
    agreeLabel_ = new QLabel("I agree with lisence agreements", this);
    agreeLabel_->setGeometry(QRect(90, 400, 200, 35));
    agreeLabel_->setStyleSheet("QLabel {font-size: 18px}");


    backButton_ = new QPushButton("Back", this);
    backButton_->setGeometry(60, 450, 130, 35);

    confirmButton_ = new QPushButton("Confirm", this);
    confirmButton_->setGeometry(210, 450, 130, 35);

    connect(backButton_, SIGNAL(clicked(bool)), this, SLOT(goLoginUserWidget()));
    connect(confirmButton_, SIGNAL(clicked(bool)), this, SLOT(goEncycloWidget()));

}

void AccountSettingsWidget::Clear()
{
    emailEdit_->clear();
    usernameEdit_->clear();
    passwordEdit_->clear();
    repasswordEdit_->clear();
    agreeCheckBox_->setEnabled(false);
    countryCombobox_->setCurrentIndex(0);
}

void AccountSettingsWidget::goLoginUserWidget()
{
    Clear();
    pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::LoginUserWidget));
}

void AccountSettingsWidget::goEncycloWidget()
{
    bool result = emailEdit_->text().contains('@');
    result &= passwordEdit_->text() == repasswordEdit_->text();
    result &= agreeCheckBox_->isChecked();

    if(result)
    {
        Clear();
        pagesWidget_->setCurrentIndex(static_cast<ushort>(WidgetType::EncycloWidget));
    }
    else
    {
        QMessageBox::warning (this, "Login Error", "<font color=red>Incorrect data</font>", QMessageBox::Ok);
    }
}
