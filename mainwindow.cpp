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


    QList<QPushButton*> buttonsList;
    buttonsList << ui->pushButton_1 << ui->pushButton_2 << ui->pushButton_3
                << ui->pushButton_4 << ui->pushButton_5;

    foreach(auto button, buttonsList)
    {
        button->setFixedSize(130, 35);
        button->setFont(QFont("Bell MT", 14, QFont::Bold, false));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()
{
    QApplication::exit();
}

void MainWindow::on_pushButton_1_clicked()
{
    this->close();
    secWindow->show();
}
