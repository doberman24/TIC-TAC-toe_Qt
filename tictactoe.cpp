#include "tictactoe.h"
//#include <QHostAddress>

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
{
//    socket = new QTcpSocket(this);  //Создаем сокет
//    socket->connectToHost(QHostAddress::LocalHost, 7777);

    width_window = 400;
    height_window = 400;
    width_field = 400;
    height_field = 400;
    wind_mov_X = 0;
    wind_mov_Y = 0;
    pX = 0;                             //координаты для
    pY = 0;                             //рисования Х и О
    move(width() / 2, height() / 2);
    resize(width_window, height_window);
    setWindowTitle("Крестики-Нолики");
    click = 0;
    win = false;
    retry_click = false;
    click_menu = false;
    for (int i = 0; i <= 9; ++i)
        win_array[i] = new XO(0, 0, -1);
//    connect(socket, SIGNAL(readyRead), SLOT(readFromServer()));
}

TicTacToe::~TicTacToe()
{
}

void TicTacToe::paintEvent(QPaintEvent * /*event*/ )
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);


    int side = qMin(width(), height());
    painter.setViewport(wind_mov_X, wind_mov_Y, side, side);
    painter.setWindow(0, 0, width_field, height_field);



    if (click_menu < 1)
        drawMenu(&painter);
    else
    {
        drawField(&painter);

/*       push = win_array[0]->n;
       painter.drawText(10, 60, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[1]->n;
       painter.drawText(10, 70, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[2]->n;
       painter.drawText(10, 80, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[3]->n;
       painter.drawText(10, 90, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[4]->n;
       painter.drawText(10, 100, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[5]->n;
       painter.drawText(10, 110, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[6]->n;
       painter.drawText(10, 120, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[7]->n;
       painter.drawText(10, 130, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
       push = win_array[8]->n;
       painter.drawText(10, 140, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(push));
*/
        painter.setPen(QPen(Qt::blue));
        painter.drawText(10, 10, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(click));
        painter.drawText(10, 20, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(retry_click));
        painter.drawText(10, 30, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(click_menu));
        painter.drawText(10, 40, 30, 30, Qt::AlignCenter |Qt::AlignTop, QString::number(win));
    }
    if (click_menu)
    {
        if (!retry_click)
            xo[click - 1] = temp;

        for (int i = 0; i < click ; ++i)
            xo[i]->drawXO(&painter);
    }

    if (win)
    {
        painter.translate(move_X, move_Y);
        painter.scale(scale_X, scale_Y);
        painter.rotate(win_line_rotate);
        win_line->drawLine(&painter);
    }
    update();
}

void TicTacToe::mousePressEvent(QMouseEvent *event)
{
    if (!win)
    {
        QPoint point = event->pos();

        if ((!click_menu) &&
            (point.x() > (width_window / 2 - 150) && point.x() < (width_window / 2 + 150) &&
             point.y() > (height_window / 2 - 30) && point.y() < (height_window / 2 + 30)))
            click_menu = true;
        else
        {
            if (event->button() == Qt::LeftButton)
            {
                pX = point.x();
                pY = point.y();

                temp = new XO(pX, pY, click % 2);
                for (int i = 0; i < click; ++i)
                {
                    if ((xo[i]->x == temp->x) && (xo[i]->y == temp->y))
                    {
                        retry_click = true;
                        break;
                    }
                    else
                        retry_click = false;
                }
                if ((!retry_click) && (click_menu))
                {
                    win = winArr(temp);
                    ++click;
                }
            }
        }
    }
}


void TicTacToe::drawField(QPainter *painter)
{

    pictures = new QPixmap(":/pictures/Pictures/Field.png");
    painter->drawPixmap(0, 0, 400, 400, *pictures);
}

void TicTacToe::drawMenu(QPainter *painter)
{

    menu = new Menu(width_window / 2 - 150, height_window / 2 - 30);//(width() / 2 - 150, height() / 2 - 30);
    menu->drawMenu(painter);
}

bool TicTacToe::winArr(XO *arr)
{
    if (arr->x == 20 && arr->y == 50)
        win_array[0] = arr;
    if (arr->x == 150 && arr->y == 40)
        win_array[1] = arr;
    if (arr->x == 285 && arr->y == 30)
        win_array[2] = arr;
    if (arr->x == 20 && arr->y == 160)
        win_array[3] = arr;
    if (arr->x == 155 && arr->y == 150)
        win_array[4] = arr;
    if (arr->x == 285 && arr->y == 145)
        win_array[5] = arr;
    if (arr->x == 20 && arr->y == 285)
        win_array[6] = arr;
    if (arr->x == 145 && arr->y == 275)
        win_array[7] = arr;
    if (arr->x == 280 && arr->y == 275)
        win_array[8] = arr;

    if (((win_array[0]->n == 1) && (win_array[1]->n == 1) && (win_array[2]->n == 1)) ||
        ((win_array[0]->n == 0) && (win_array[1]->n == 0) && (win_array[2]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -98.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 5;
        move_Y = 130;
        return true;
    }
    else if (((win_array[3]->n == 1) && (win_array[4]->n == 1) && (win_array[5]->n == 1)) ||
             ((win_array[3]->n == 0) && (win_array[4]->n == 0) && (win_array[5]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -98.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 5;
        move_Y = 250;
        return true;
    }
    else if (((win_array[6]->n == 1) && (win_array[7]->n == 1) && (win_array[8]->n == 1)) ||
             ((win_array[6]->n == 0) && (win_array[7]->n == 0) && (win_array[8]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -98.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 5;
        move_Y = 370;
        return true;
    }
    else if (((win_array[0]->n == 1) && (win_array[3]->n == 1) && (win_array[6]->n == 1)) ||
        ((win_array[0]->n == 0) && (win_array[3]->n == 0) && (win_array[6]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = 0.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 50;
        move_Y = 0;
        return true;
    }
    else if (((win_array[1]->n == 1) && (win_array[4]->n == 1) && (win_array[7]->n == 1)) ||
        ((win_array[1]->n == 0) && (win_array[4]->n == 0) && (win_array[7]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = 0.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 175;
        move_Y = 0;
        return true;
    }
    else if (((win_array[2]->n == 1) && (win_array[5]->n == 1) && (win_array[8]->n == 1)) ||
        ((win_array[2]->n == 0) && (win_array[5]->n == 0) && (win_array[8]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -3.0;
        scale_X = 1;
        scale_Y = 1;
        move_X = 310;
        move_Y = 0;
        return true;
    }
    else if (((win_array[0]->n == 1) && (win_array[4]->n == 1) && (win_array[8]->n == 1)) ||
        ((win_array[0]->n == 0) && (win_array[4]->n == 0) && (win_array[8]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -71.0;
        scale_X = 1;
        scale_Y = 2;
        move_X = 10;
        move_Y = 130;
        return true;
    }
    else if (((win_array[2]->n == 1) && (win_array[4]->n == 1) && (win_array[6]->n == 1)) ||
        ((win_array[2]->n == 0) && (win_array[4]->n == 0) && (win_array[6]->n == 0)))
    {
        win_line = new WinLine(0, 0);
        win_line_rotate = -117.0;
        scale_X = 1;
        scale_Y = 2.2;
        move_X = 30;
        move_Y = 440;
        return true;
    }
    else
        return false;
}

/*void TicTacToe::readFromServer()
{

}

void TicTacToe::sendToServer()
{

}*/
