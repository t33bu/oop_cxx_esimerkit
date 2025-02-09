#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

#include "qtmittari.h"
#include "qtdht.h"
#include "qtlcd.h"

int main(int argc, char *argv[])
{
    // Luodaan Qt-sovellus ja oliot
    QCoreApplication a(argc, argv);
    QtMittari mittari(&a);
    QtDHT lampotilasensori(&a);
    QtLCD lcd(&a);

    // pelkkä rivinvaihto
    qDebug();

    // Kytketään signaalit slotteihin eri olioissa
    QObject::connect(&mittari, SIGNAL(finished()),
                     &a, SLOT(quit()));
    QObject::connect(&mittari, SIGNAL(readTemperatureSignal()),
                     &lampotilasensori, SLOT(readTemperatureSlot()));
    QObject::connect(&lampotilasensori, SIGNAL(temperatureSignal(float)),
                     &mittari, SLOT(temperatureSlot(float)));
    QObject::connect(&mittari, SIGNAL(printSignal(float)),
                     &lcd, SLOT(printSlot(float)));
    QObject::connect(&lcd, SIGNAL(printOkSignal()),
                     &mittari, SLOT(printOkSlot()));

    // Ohjelma käynnistyy täältä
    qDebug() << "main Lahetetaan signaali QtTimer::timeout";
    QTimer::singleShot(0, &mittari, SLOT(beginSlot()));

    // käynnistetään paaohjelma
    return a.exec();
}
