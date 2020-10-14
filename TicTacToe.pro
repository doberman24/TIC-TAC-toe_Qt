#-------------------------------------------------
#
# Project created by QtCreator 2014-07-06T20:45:55
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app


SOURCES += main.cpp\
        tictactoe.cpp \
    xo.cpp \
    menu.cpp \
    winline.cpp

HEADERS  += tictactoe.h \
    xo.h \
    menu.h \
    winline.h \
    window_size.h

RESOURCES += \
    Pictures.qrc
