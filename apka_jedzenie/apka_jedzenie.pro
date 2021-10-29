QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    azja.cpp \
    gruzin.cpp \
    italy.cpp \
    main.cpp \
    mainwindow.cpp \
    polska.cpp \
    usa.cpp

HEADERS += \
    azja.h \
    gruzin.h \
    italy.h \
    mainwindow.h \
    polska.h \
    usa.h

FORMS += \
    azja.ui \
    gruzin.ui \
    italy.ui \
    mainwindow.ui \
    polska.ui \
    usa.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    zasoby_1.qrc
