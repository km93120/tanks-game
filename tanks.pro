#-------------------------------------------------
#
# Project created by QtCreator 2018-09-13T16:58:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tanks
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    view.cpp \
    model.cpp \
    control.cpp \
    level.cpp \
    wall.cpp \
    player.cpp \
    enemy.cpp \
    keyboard.cpp \
    missile.cpp \
    standardenemy.cpp \
    reinforcedwall.cpp

HEADERS += \
    view.h \
    model.h \
    control.h \
    level.h \
    wall.h \
    player.h \
    enemy.h \
    keyboard.h \
    missile.h \
    standardenemy.h \
    reinforcedwall.h

RESOURCES += \
    ressources.qrc
