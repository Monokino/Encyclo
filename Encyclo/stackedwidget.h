#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include <QStackedWidget>

class StackedWidget : public QStackedWidget
{
    Q_OBJECT

public:

    explicit StackedWidget(QWidget* parent = nullptr);
    ~StackedWidget();
};

#endif // STACKEDWIDGET_H
