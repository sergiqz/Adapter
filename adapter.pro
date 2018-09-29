#-------------------------------------------------
#
# Project created by QtCreator 2018-09-28T16:59:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = adapter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    circunferencia.cpp \
    cuadrilatero.cpp \
    estilizado.cpp \
    fabrica.cpp \
    forma.cpp \
    rectangulo.cpp \
    simple.cpp \
    adapter.cpp \
    cuadrado.cpp

HEADERS  += mainwindow.h \
    adapter.h \
    cuadrado.h

FORMS    += mainwindow.ui
