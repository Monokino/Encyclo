#include <QApplication>

#include "Game.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Game game;
    game.show();

    app.setStyleSheet("QPushButton {color: #000000;"
                      "border: 2px solid #363636; "
                      "border-radius: 10px;"
                      "background-color: #FFFFFF;"
                      "font-family: Bell MT;"
                      "font-size: 20px;"
                      "font-weight: bold;"
                      "}");

    return app.exec();
}
