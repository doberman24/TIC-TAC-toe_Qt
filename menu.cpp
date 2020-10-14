#include "menu.h"

Menu::Menu(int _x, int _y) : x(_x), y(_y)
{
}

Menu::~Menu()
{
}

void Menu::drawMenu(QPainter *painter)
{
    pictures = new QPixmap(":/pictures/Pictures/Start_Button.jpg");
    painter->drawPixmap(x, y, 300, 60, *pictures);
}
