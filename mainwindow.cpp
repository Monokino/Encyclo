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

    ui->pushButton_1->setGeometry(135, 200, 130, 35);
    ui->pushButton_2->setGeometry(135, 260, 130, 35);
    ui->pushButton_3->setGeometry(135, 320, 130, 35);
    ui->pushButton_4->setGeometry(135, 380, 130, 35);
    ui->pushButton_5->setGeometry(135, 440, 130, 35);

    ui->pushButton_1->setFixedSize(130, 35);
    ui->pushButton_2->setFixedSize(130, 35);
    ui->pushButton_3->setFixedSize(130, 35);
    ui->pushButton_4->setFixedSize(130, 35);
    ui->pushButton_5->setFixedSize(130, 35);
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
