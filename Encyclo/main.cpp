#include <QApplication>
#include <QStandardPaths>
#include <iostream>
#include <QString>

#include "Game.h"
#include "DBManager.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    DBManager db;
    if(!db.GetDBCreateResult())
    {
        return -1;
    }

    Game game;
    game.show();

    app.setStyleSheet("QPushButton {color: #000000;"
                      "border: 1px solid #8B3626; "
                      "border-radius: 10px;"
                      "background-color: #FFFFFF;"
                      "font-family: Gabriola;"
                      "font-size: 23px;"
                      "font-weight: bold;"
                      "text-align: center;"
                      "}"

                      "QPushButton:hover {background-color: #FAEBD7;"
                      "text-decoration: underline;"
                      "}"

                      "QLabel {color: #FFFFFF;"
                      "font-family: Gabriola;"
                      "font-size: 22px;"
                      "font-weight: bold;"
                      "text-align: center;"
                      "}"

                      "QLineEdit {border-radius: 3px;"
                      "font-family: Bell MT;"
                      "font-size: 15px;"
                      "font-weight: bold;"
                      "}"

                      "QComboBox {border-radius: 2px;"
                      "font-family: Bell MT;"
                      "font-size: 15px;"
                      "font-weight: bold;"
                      "}");

    return app.exec();
}

//Bell MT;"
