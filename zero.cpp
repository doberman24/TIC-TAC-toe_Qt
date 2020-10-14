#include "zero.h"

Zero::Zero(int _x, int _y) : x(_x), y(_y)
//Zero::Zero()
{
}

Zero::~Zero()
{

}

/*void Zero::drawO(QPainter *painter, int _x, int _y)
{
    if (_x > 0 && _x < 130 && _y > 0 && _y < 155)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
        painter->drawPixmap(20, 50, 100, 100, *pictures);
    }

    if (_x > 135 && _x < 265 && _y > 0 && _y < 146)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(150, 40, 100, 100, *pictures);
    }

    if (_x > 270 && _x < 400 && _y > 0 && _y < 137)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(285, 30, 100, 100, *pictures);
    }

    if (_x > 0 && _x < 130 && _y > 160 && _y < 260)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(20, 160, 100, 100, *pictures);
    }

    if (_x > 135 && _x < 265 && _y > 150 && _y < 250)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
        painter->drawPixmap(155, 150, 100, 100, *pictures);
    }

    if (_x > 270 && _x < 400 && _y > 140 && _y < 250)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(285, 145, 100, 100, *pictures);
    }

    if (_x > 0 && _x < 130 && _y > 270 && _y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(20, 285, 100, 100, *pictures);
    }

    if (_x > 135 && _x < 255 && _y > 258 && _y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(145, 275, 100, 100, *pictures);
    }

    if (_x > 265 && _x < 400 && _y > 250 && _y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(280, 275, 100, 100, *pictures);
    }
    */

void Zero::drawO(QPainter *painter)
{
    if (x > 0 && x < 130 && y > 0 && y < 155)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
        painter->drawPixmap(20, 50, 100, 100, *pictures);
    }

    if (x > 135 && x < 265 && y > 0 && y < 146)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(150, 40, 100, 100, *pictures);
    }

    if (x > 270 && x < 400 && y > 0 && y < 137)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(285, 30, 100, 100, *pictures);
    }

    if (x > 0 && x < 130 && y > 160 && y < 260)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(20, 160, 100, 100, *pictures);
    }

    if (x > 135 && x < 265 && y > 150 && y < 250)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero1.png");
        painter->drawPixmap(155, 150, 100, 100, *pictures);
    }

    if (x > 270 && x < 400 && y > 140 && y < 250)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(285, 145, 100, 100, *pictures);
    }

    if (x > 0 && x < 130 && y > 270 && y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(20, 285, 100, 100, *pictures);
    }

    if (x > 135 && x < 255 && y > 258 && y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero3.png");
        painter->drawPixmap(145, 275, 100, 100, *pictures);
    }

    if (x > 265 && x < 400 && y > 250 && y < 400)
    {
        pictures = new QPixmap(":/pictures/Pictures/Zero2.png");
        painter->drawPixmap(280, 275, 100, 100, *pictures);
    }
}
