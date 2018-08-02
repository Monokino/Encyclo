#include "secondwindow.h"
#include "ui_secondwindow.h"

secondWindow::secondWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::secondWindow)
{
    ui->setupUi(this);

    ui->pediaButton->setGeometry(42, 10, 140, 35);
    ui->achievButton->setGeometry(42, 70, 140, 35);
    ui->menuButton->setGeometry(42, 130, 140, 35);

    ui->questButton->setGeometry(229, 10, 140, 35);
    ui->rankButton->setGeometry(229, 70, 140, 35);
    ui->shopButton->setGeometry(229, 130, 140, 35);

    ui->newgameButton->setGeometry(130, 300, 140, 35);


    QList<QPushButton*> buttonsList;
    buttonsList << ui->achievButton << ui->menuButton << ui->rankButton
                << ui->shopButton << ui->questButton << ui->newgameButton << ui->pediaButton;

    foreach(auto button, buttonsList)
    {
        button->setFixedSize(140, 35);
        button->setFont(QFont("Bell MT", 16, QFont::Bold, false));
        button->setStyleSheet("* {color: #000000;"
                              "border: 2px solid #363636; "
                              "border-radius: 10px;"
                              "background-color: #FFFFFF;"
                              ";}");
    }

}

secondWindow::~secondWindow()
{
    delete ui;
}

void secondWindow::on_menuButton_clicked()
{
    this->close();
    emit firstWindow();
}
