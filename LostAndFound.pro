#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T16:20:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LostAndFound
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    startupform.cpp \
    lostdialog.cpp \
    founddialog.cpp \
    pubdialog.cpp \
    checkdialog.cpp \
    checkindialog.cpp \
    boarddialog.cpp \
    aboutdialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    startupform.h \
    lostdialog.h \
    founddialog.h \
    pubdialog.h \
    checkdialog.h \
    checkindialog.h \
    boarddialog.h \
    aboutdialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    startupform.ui \
    lostdialog.ui \
    founddialog.ui \
    pubdialog.ui \
    checkdialog.ui \
    checkindialog.ui \
    boarddialog.ui \
    aboutdialog.ui

RESOURCES += \
    resources.qrc

RC_FILE = icon.rc
