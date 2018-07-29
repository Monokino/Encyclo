#include "buttons.h"

Buttons::Buttons()
{

}


Buttons::Buttons(int x, int y, int width, int height,
                 QString fontFamily, int fontSize, QFont::Weight weight, bool italic, QString text,
                 QString toolTipText, int toolTipDuration)
{
    this->setGeometry(x, y, width, height);

    this->setToolTip(toolTipText);
    this->setToolTipDuration(toolTipDuration);

    QFont font(fontFamily, fontSize, weight, italic);
    this->setFont(font);

    this->setFixedSize(QSize(width, height));

    this->setText(text);


}
