#include "tictactoe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Menu m;
    TicTacToe t;
//    m.show();
//    if (m.start)
//    {
//        m.close();
        t.show();
//    }

    return a.exec();
}
