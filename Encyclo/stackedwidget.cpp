#include "stackedwidget.h"

StackedWidget::StackedWidget(QWidget* parent) : QStackedWidget(parent), ui(new Ui::game)
{
    ui->setupUi(this);
}

StackedWidget::~StackedWidget()
{
    delete ui;
}
