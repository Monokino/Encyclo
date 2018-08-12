#ifndef LOGINUSERWIDGET_H
#define LOGINUSERWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>

class LoginUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginUserWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QPushButton* newUserButton_;
    QPushButton* existingUserButton_;

    QStackedWidget* pagesWidget_;

private slots:

    void goAccountSettingsWidget();
};

#endif // LOGINUSERWIDGET_H
