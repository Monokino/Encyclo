#ifndef EXISTINGUSERWIDGET_H
#define EXISTINGUSERWIDGET_H

#include <QWidget>

class QStackedWidget;
class QLabel;
class QLineEdit;
class QPushButton;

class ExistingUserWidget : public QWidget
{
    Q_OBJECT

public:

    explicit ExistingUserWidget(QStackedWidget* stackedWidget, QWidget* parent = nullptr);

private:

    QLabel* usernameLabel_;
    QLabel* passwordLabel_;

    QLineEdit* usernameEdit_;
    QLineEdit* passwordEdit_;

    QPushButton* backButton_;
    QPushButton* confirmButton_;

    QStackedWidget* pagesWidget_;

private slots:

    void goLoginUserWidget();
    void goEncycloWidget();

};

#endif // EXISTINGUSERWIDGET_H
