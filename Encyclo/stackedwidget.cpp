#include "StackedWidget.h"

StackedWidget::StackedWidget(QWidget* parent) : QStackedWidget(parent), ui(new Ui::game)
{
    ui->setupUi(this);

    ui->encycloLabel->setFont(QFont("Bell MT", 35, QFont::Bold, false));
    ui->encycloLabel->setText("<font color=#ffffff align=center>ENCYCLO</font>");

    QList<QPushButton*> buttonsList;
    buttonsList << ui->playButton << ui->optionsButton << ui->helpButton
                << ui->googleButton << ui->exitButton;

    foreach(const auto button, buttonsList)
    {
        button->setFixedSize(140, 35);
        button->setFont(QFont("Bell MT", 16, QFont::Bold, false));
        button->setStyleSheet("QPushButton {color: #000000;"
                              "border: 2px solid #363636; "
                              "border-radius: 10px;"
                              "background-color: #FFFFFF;"
                              "}");



        /*button->setStyleSheet("* :hover {color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.0738636 rgba(139, 18, 18, 255), stop:0.488636 rgba(0, 0, 0, 255), stop:0.931818 rgba(139, 23, 23, 255));"
                              "border: 1px solid #8B4513; "
                              "border-radius: 10px;"
                              "background-color: #ffffff;"
                              "}");*/
    }
}

StackedWidget::~StackedWidget()
{
    delete ui;
}
