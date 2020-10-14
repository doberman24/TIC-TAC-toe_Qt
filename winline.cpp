#include "winline.h"

void WinLine::drawLine(QPainter *painter)
{
    pictures = new QPixmap(":/pictures/Pictures/Win_line.png");
    painter->drawPixmap(x, y, 35, 400, *pictures);
}

