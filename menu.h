#ifndef MENU_H
#define MENU_H

#include <QPainter>

class Menu : public QPainter
{
public:
    Menu(int _x, int _y);// : x(_x), y(_y));
    ~Menu();

    QPixmap *pictures;

    void drawMenu(QPainter *painter/*, bool n*/);
    int x, y;

};

#endif // MENU_H
