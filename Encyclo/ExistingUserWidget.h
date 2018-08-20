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

    QStackedWidget* pagesWidget_;

};

#endif // EXISTINGUSERWIDGET_H
