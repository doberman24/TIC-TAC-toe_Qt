#ifndef XO_H
#define XO_H

#include <QPainter>


class XO : public QPainter
{
public:
    XO(int _x, int _y, int _n);
    ~XO();

    QPixmap *pictures;

    void drawXO(QPainter *painter/*, bool n*/);
    int x, y, n;
//    bool n;
};

#endif // XO_H
