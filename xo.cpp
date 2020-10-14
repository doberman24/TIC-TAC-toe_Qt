#include "xo.h"
#include <QWidget>

XO::XO(int _x, int _y, int _n)// : x(_x), y(_y)
{
    if (_x > 0 && _x < 134 && _y > 0 && _y < 155)
    {
        x = 20;
        y = 50;
    }
    else if (_x > 135 && _x < 269 && _y > 0 && _y < 146)
    {
        x = 150;
        y = 40;
    }
    else if (_x > 270 && _x < 400 && _y > 0 && _y < 137)
    {
        x = 285;
        y = 30;
    }
    else if (_x > 0 && _x < 134 && _y > 156 && _y < 265)
    {
        x = 20;
        y = 160;
    }
    else if (_x > 135 && _x < 269 && _y > 147 && _y < 255)
    {
        x = 155;
        y = 150;
    }
    else if (_x > 270 && _x < 400 && _y > 138 && _y < 250)
    {
        x = 285;
        y = 145;
    }
    else if (_x > 0 && _x < 134 && _y > 266 && _y < 400)
    {
        x = 20;
        y = 285;
    }
    else if (_x > 135 && _x < 259 && _y > 256 && _y < 400)
    {
        x = 145;
        y = 275;
    }
    else if (_x > 260 && _x < 400 && _y > 251 && _y < 400)
    {
        x = 280;
        y = 275;
    }
    n = _n;


    if (n && x == 20 && y == 50)
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
    else if (n && x == 150 && y == 40)
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
    else if (n && x == 285 && y == 30)
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
    else if (n && x == 20 && y == 160)
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
    else if (n && x == 155 && y == 150)
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
    else if (n && x == 285 && y == 145)
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
    else if (n && x == 20 && y == 285)
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
    else if (n && x == 145 && y == 275)
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
    else if (n && x == 280 && y == 275)
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");

    if (!n && x == 20 && y == 50)
        pictures = new QPixmap(":/pictures/Pictures/Eks1.png");
    else if (!n && x == 150 && y == 40)
        pictures = new QPixmap(":/pictures/Pictures/Eks2.png");
    else if (!n && x == 285 && y == 30)
        pictures = new QPixmap(":/pictures/Pictures/Eks3.png");
    else if (!n && x == 20 && y == 160)
        pictures = new QPixmap(":/pictures/Pictures/Eks2.png");
    else if (!n && x == 155 && y == 150)
        pictures = new QPixmap(":/pictures/Pictures/Eks1.png");
    else if (!n && x == 285 && y == 145)
        pictures = new QPixmap(":/pictures/Pictures/Eks4.png");
    else if (!n && x == 20 && y == 285)
        pictures = new QPixmap(":/pictures/Pictures/Eks4.png");
    else if (!n && x == 145 && y == 275)
        pictures = new QPixmap(":/pictures/Pictures/Eks3.png");
    else if (!n && x == 280 && y == 275)
        pictures = new QPixmap(":/pictures/Pictures/Eks1.png");
}

XO::~XO()
{

}


void XO::drawXO(QPainter *painter)
{
    painter->drawPixmap(x, y, 100, 100, *pictures);
}
