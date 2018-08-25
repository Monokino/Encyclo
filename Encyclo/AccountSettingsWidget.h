#ifndef ACCOUNTSETTINGSWIDGET_H
#define ACCOUNTSETTINGSWIDGET_H

#include <QWidget>

class QLabel;
class QLineEdit;
class QComboBox;
class QStackedWidget;
class QCheckBox;
class QPushButton;

class AccountSettingsWidget : public QWidget
{
    Q_OBJECT

public:

    explicit AccountSettingsWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QLabel* emailLabel_;
    QLabel* usernameLabel_;
    QLabel* countryLabel_;
    QLabel* passwordLabel_;
    QLabel* repasswordLabel_;

    QLineEdit* emailEdit_;
    QLineEdit* usernameEdit_;
    QComboBox* countryCombobox_;
    QLineEdit* passwordEdit_;
    QLineEdit* repasswordEdit_;

    QCheckBox* agreeCheckBox_;
    QLabel* agreeLabel_;

    QPushButton* backButton_;
    QPushButton* confirmButton_;

    QStackedWidget* pagesWidget_;

    void Clear();

private slots:

    void goLoginUserWidget();
    void goEncycloWidget();
};

#endif // ACCOUNTSETTINGSWIDGET_H
