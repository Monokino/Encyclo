#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include <QStackedWidget>

#include "ui_stackedwidget.h"

namespace Ui {
class game;
}

class StackedWidget : public QStackedWidget
{
    Q_OBJECT

public:

    explicit StackedWidget(QWidget* parent = nullptr);
    ~StackedWidget();

private:

    Ui::game* ui;
};

#endif // STACKEDWIDGET_H
