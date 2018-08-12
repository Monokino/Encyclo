#include "NewGamePage.h"

NewGamePage::NewGamePage(QStackedWidget* stackedWidget, QWidget* parent) : QWidget(parent)
{
    pagesWidget_ = stackedWidget;
    encycloLabel_ = new QPushButton("text2", this);
    encycloLabel_->setGeometry(0,0,100,300);
    encycloLabel_->show();
}
