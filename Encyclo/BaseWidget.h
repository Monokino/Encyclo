#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include <QStackedWidget>
#include <QWidget>

class BaseWidget : public QWidget
{

public:

    explicit BaseWidget(QWidget* parent = nullptr);
    ~BaseWidget();

protected:

    QStackedWidget* stackedWidget;
};

#endif // STACKEDWIDGET_H
