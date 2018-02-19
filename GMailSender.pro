QT += core gui
QT += xml network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GMailSender
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp

HEADERS += mainwindow.h
SOURCES += mainwindow.cpp

HEADERS += QMessageProcessor.h
SOURCES += QMessageProcessor.cpp

HEADERS += QHttpServer.h
SOURCES += QHttpServer.cpp

HEADERS += CLogger.h
SOURCES += CLogger.cpp

HEADERS += SConfig.h
SOURCES += SConfig.cpp

FORMS += mainwindow.ui
