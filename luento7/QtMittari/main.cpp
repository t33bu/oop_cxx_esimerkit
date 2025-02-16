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
    // Sovelluksen omat oliot
    QtMittari mittari(&a);
    QtDHT lampotilasensori(&a);
    QtLCD lcd(&a);

    // Hox! Erilainen syntaksi kytkeä connect-funktiolla
    // Kytketään signaalit slotteihin eri olioissa
    // 1. Ohjelman lopetus-signaali
    QObject::connect(&mittari, &QtMittari::finished,
                     &a, QCoreApplication::quit,
                     Qt::QueuedConnection);
    // 2. kysytaan lämpötila-signaali
    QObject::connect(&mittari, &QtMittari::readTemperatureSignal,
                     &lampotilasensori, &QtDHT::readTemperatureSlot,
                     Qt::QueuedConnection);
    // 3. lähetetään lämpötila
    QObject::connect(&lampotilasensori, &QtDHT::temperatureSignal,
                     &mittari, &QtMittari::temperatureSlot,
                     Qt::QueuedConnection);
    // 4. kirjoitetaan LCD-näytölle signaali
    QObject::connect(&mittari, &QtMittari::printSignal,
                     &lcd, &QtLCD::printSlot,
                     Qt::QueuedConnection);
    // 5. LCD-näytöllä kaikki ok-signaali
    QObject::connect(&lcd, &QtLCD::printOkSignal,
                     &mittari, &QtMittari::printOkSlot,
                     Qt::QueuedConnection);

    // Ohjelma käynnistyy tästä ajastimen avulla
    qDebug() << "main Lahetetaan signaali QtTimer::timeout";
    QTimer::singleShot(0, &mittari, &QtMittari::beginSlot);

    // käynnistetään pääohjelma
    return a.exec();
}
