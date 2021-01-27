QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bala.cpp \
    balacirc.cpp \
    balagraf.cpp \
    balamrua.cpp \
    balaparab.cpp \
    barco.cpp \
    barcograf.cpp \
    jugador.cpp \
    main.cpp \
    mainwindow.cpp \
    muro.cpp

HEADERS += \
    bala.h \
    balacirc.h \
    balagraf.h \
    balamrua.h \
    balaparab.h \
    barco.h \
    barcograf.h \
    jugador.h \
    mainwindow.h \
    muro.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    pictures.qrc
