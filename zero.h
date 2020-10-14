#ifndef ZERO_H
#define ZERO_H

#include <QPainter>

class Zero : public QPainter
{
public:
    Zero(int _x, int _y);
//    Zero();
    ~Zero();

    QPixmap *pictures;

    void drawO(QPainter *painter);
//    void drawO(QPainter *painter, int _x, int _y);
    int x, y;
};

#endif // ZERO_H
