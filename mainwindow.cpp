#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    secWindow = new secondWindow ();
    connect(secWindow, &secondWindow::firstWindow, this, &MainWindow::show);

    ui->label->setFont(QFont("Bell MT", 35, QFont::Bold, false));

    ui->playButton->setGeometry(130, 210, 140, 35);
    ui->optionButton->setGeometry(130, 270, 140, 35);
    ui->helpButton->setGeometry(130, 330, 140, 35);
    ui->googleButton->setGeometry(130, 390, 140, 35);
    ui->exitButton->setGeometry(130, 450, 140, 35);

    ui->label->setText("<font color=#ffffff>ENCYCLO</font>");
    ui->label->setAlignment(Qt::AlignHCenter);


    QList<QPushButton*> buttonsList;
    buttonsList << ui->playButton << ui->optionButton << ui->helpButton
                << ui->googleButton << ui->exitButton;

    foreach(auto button, buttonsList)
    {
        button->setFixedSize(140, 35);
        button->setFont(QFont("Bell MT", 16, QFont::Bold, false));
        button->setStyleSheet("* {color: #000000;"
                              "border: 2px solid #363636; "
                              "border-radius: 10px;"
                              "background-color: #FFFFFF;"
                              ";}");



        /*button->setStyleSheet("* :hover {color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.0738636 rgba(139, 18, 18, 255), stop:0.488636 rgba(0, 0, 0, 255), stop:0.931818 rgba(139, 23, 23, 255));"
                              "border: 1px solid #8B4513; "
                              "border-radius: 10px;"
                              "background-color: #ffffff;"
                              "}");*/
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_playButton_clicked()
{
    this->close();
    secWindow->show();
}

void MainWindow::on_exitButton_clicked()
{
    QApplication::exit();
}
