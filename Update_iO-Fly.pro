QT += core gui
QT += network
QT += serialport
QT += multimedia multimediawidgets
QT += printsupport
QT += core gui network
QT += widgets

TARGET = DeleteComPorts

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mainwin.cpp

HEADERS += \
        mainwin.h \
    globalconsts.h


FORMS += \
        mainwin.ui


DISTFILES +=

RESOURCES += \
    resources.qrc
