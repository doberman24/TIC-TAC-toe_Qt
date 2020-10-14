#ifndef WINLINE_H
#define WINLINE_H

#include <QPainter>

class WinLine : public QPainter
{
public:
    WinLine(int _x, int _y) : x(_x), y(_y)
    {}
    ~WinLine()
    {}

    QPixmap *pictures;

    void drawLine(QPainter *painter/*, bool n*/);
    int x, y;

};

#endif // WINLINE_H
