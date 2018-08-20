#ifndef LOGINUSERWIDGET_H
#define LOGINUSERWIDGET_H

#include <QWidget>

class QStackedWidget;
class QPushButton;

class LoginUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginUserWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* newUserButton_;
    QPushButton* existingUserButton_;
    QPushButton* exitButton_;


    QStackedWidget* pagesWidget_;

private slots:

    void goAccountSettingsWidget();
    void goExistingUserWidget();
};

#endif // LOGINUSERWIDGET_H
