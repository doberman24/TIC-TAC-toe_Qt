#ifndef EKS_H
#define EKS_H

#include <QPainter>

class Eks : public QPainter
{
public:
    Eks(int _x, int _y);
//    Eks();
    ~Eks();

    QPixmap *pictures;

    void drawX(QPainter *painter);
//    void drawX(QPainter *painter, int _x, int _y);
    int x, y;
};

#endif // EKS_H
