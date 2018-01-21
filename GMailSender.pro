QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GMailSender
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp

HEADERS += mainwindow.h
SOURCES += mainwindow.cpp

FORMS += mainwindow.ui
