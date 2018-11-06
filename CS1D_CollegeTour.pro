#-------------------------------------------------
#
# Project created by QtCreator 2018-01-28T13:52:15
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D_FastFood
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
    mainwindow.cpp \
    collegemodel.cpp \
    databasemanager.cpp \
    adminwindow.cpp \
    tripwindow.cpp

HEADERS += \
    cart.h \
    college.h \
    mainwindow.h \
    collegemodel.h \
    databasemanager.h \
    adminwindow.h \
    tripwindow.h

FORMS += \
    mainwindow.ui \
    collegemodel.ui \
    adminwindow.ui \
    tripwindow.ui

RESOURCES += \
    style.qrc
