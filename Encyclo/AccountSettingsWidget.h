#ifndef ACCOUNTSETTINGSWIDGET_H
#define ACCOUNTSETTINGSWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QStackedWidget>

class AccountSettingsWidget : public QWidget
{
    Q_OBJECT

public:

    explicit AccountSettingsWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QLabel* usernameLabel_;
    QLabel* countryLabel_;
    QLabel* passwordLabel_;
    QLineEdit* usernameEdit_;
    QLineEdit* passwordEdit_;
    QComboBox* countryCombobox_;

    QStackedWidget* pagesWidget_;
};

#endif // ACCOUNTSETTINGSWIDGET_H
