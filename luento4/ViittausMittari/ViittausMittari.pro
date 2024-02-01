TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dht.cpp \
        lcd.cpp \
        main.cpp \
        viittausmittari.cpp

HEADERS += \
    dht.h \
    lcd.h \
    viittausmittari.h
