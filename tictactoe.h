#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "xo.h"
#include "menu.h"
#include "winline.h"
//#include "window_size.h"
#include <QMainWindow>
#include <QMouseEvent>
//#include <QTcpSocket>

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = 0);
    ~TicTacToe();

    void drawMenu(QPainter *painter);
    void drawField(QPainter *painter);
    bool winArr(XO *arr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

    QPixmap *pictures;
    QImage *image;
    QPoint position;
    int width_window, height_window;
    int width_field, height_field;
    int wind_mov_X, wind_mov_Y;
    int pX, pY, move_X, move_Y;
    int click;
    bool win, click_menu, retry_click;
    int clickX, clickO;     //вспомогательные переменные
    int push, chek;         //вспомогательные переменные
    Menu *menu;
    WinLine *win_line;
    float win_line_rotate, scale_X, scale_Y;
    XO *xo[8], *win_array[9];
    XO *temp;

//private:
//    QTcpSocket *socket;
//    quint16 nextBlockSize;

/*private slots:
    void readFromServer();
    void sendToServer();
*/
};

#endif // TICTACTOE_H
