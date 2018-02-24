QT += core gui xml network webenginewidgets webengine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GMailSender
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp

HEADERS += mainwindow.h
SOURCES += mainwindow.cpp

HEADERS += QMailProcessor.h
SOURCES += QMailProcessor.cpp

HEADERS += QGMailManager.h
SOURCES += QGMailManager.cpp

HEADERS += CLogger.h
SOURCES += CLogger.cpp

HEADERS += SConfig.h
SOURCES += SConfig.cpp

FORMS += mainwindow.ui
