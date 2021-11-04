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
    przepis_azja_1.cpp \
    przepis_azja_2.cpp \
    przepis_italy_1.cpp \
    przepis_italy_2.cpp \
    przepis_polska_1.cpp \
    przepis_polska_2.cpp \
    przepis_usa_1.cpp \
    przepis_usa_2.cpp \
    przepisy_azja.cpp \
    przepisy_gruzin.cpp \
    przepisy_italy.cpp \
    przepisy_polska.cpp \
    przepisy_usa.cpp \
    usa.cpp

HEADERS += \
    azja.h \
    gruzin.h \
    italy.h \
    mainwindow.h \
    polska.h \
    przepis_azja_1.h \
    przepis_azja_2.h \
    przepis_italy_1.h \
    przepis_italy_2.h \
    przepis_polska_1.h \
    przepis_polska_2.h \
    przepis_usa_1.h \
    przepis_usa_2.h \
    przepisy_azja.h \
    przepisy_gruzin.h \
    przepisy_italy.h \
    przepisy_polska.h \
    przepisy_usa.h \
    usa.h

FORMS += \
    azja.ui \
    gruzin.ui \
    italy.ui \
    mainwindow.ui \
    polska.ui \
    przepis_azja_1.ui \
    przepis_azja_2.ui \
    przepis_italy_1.ui \
    przepis_italy_2.ui \
    przepis_polska_1.ui \
    przepis_polska_2.ui \
    przepis_usa_1.ui \
    przepis_usa_2.ui \
    przepisy_azja.ui \
    przepisy_gruzin.ui \
    przepisy_italy.ui \
    przepisy_polska.ui \
    przepisy_usa.ui \
    usa.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    zasoby_1.qrc
