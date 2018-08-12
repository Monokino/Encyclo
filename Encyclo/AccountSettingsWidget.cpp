#include "AccountSettingsWidget.h"
#include "Helper.h"

AccountSettingsWidget::AccountSettingsWidget(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;

    usernameLabel_ = new QLabel("Username", this);
    usernameLabel_->setGeometry(QRect(60, 210, 130, 35));

    countryLabel_ = new QLabel("Country", this);
    countryLabel_->setGeometry(QRect(60, 270, 130, 35));

    passwordLabel_ = new QLabel("Password", this);
    passwordLabel_->setGeometry(QRect(60, 330, 130, 35));

    usernameEdit_ = new QLineEdit(this);
    usernameEdit_->setGeometry(QRect(210, 210, 130, 35));

    countryCombobox_ = new QComboBox(this);
    countryCombobox_->setGeometry(QRect(210, 270, 130, 35));

    QStringList countryList;
    countryList << "Ukraine" << "USA" << "Great Britain";
    countryCombobox_->addItems(countryList);

    passwordEdit_ = new QLineEdit(this);
    passwordEdit_->setGeometry(QRect(210, 330, 130, 35));
}
