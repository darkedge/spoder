#-------------------------------------------------
#
# Project created by QtCreator 2017-04-16T14:18:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spoder
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mjtextedit.cpp \
    autovectorizedialog.cpp

HEADERS  += mainwindow.h \
    mjtextedit.h \
    autovectorizedialog.h

FORMS    += mainwindow.ui \
    autovectorizedialog.ui
