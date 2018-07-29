#ifndef BUTTONS_H
#define BUTTONS_H
#include <QPushButton>

class Buttons : public QPushButton
{
public:
    Buttons();
    Buttons(int x, int y, int width = 130, int height = 35,
            QString fontFamily = "Bell MT", int fontSize = 14, QFont::Weight weight = QFont::Bold,
            bool italic = false, QString text = "", QString toolTipText = "", int toolTipDuration = -1);
};

#endif // BUTTONS_H
