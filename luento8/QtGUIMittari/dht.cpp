#include <QDebug>
#include <QTimer>
#include <QRandomGenerator>
#include "dht.h"

DHT::DHT()
{
    qDebug() << "DHT konstruktori";
}

DHT::~DHT()
{
    qDebug() << "DHT destruktori";
}

void DHT::run()
{
    // Hox! oikeampi tapa ajaa säiettä
    // kuin while-silmukka
    QTimer everySecond;
    connect(&everySecond,SIGNAL(timeout()),
            this,SLOT(measureTemperatureSlot()));
    everySecond.start(1000);
    exec();
}

void DHT::askTemperatureSlot()
{
    qDebug() << "DHT::askTemperatureSlot( " << temperature << ")";
    qDebug() << "DHT -> newTemperatureSignal( " << temperature << ")";
    emit newTemperatureSignal(temperature);
}

void DHT::measureTemperatureSlot()
{
    temperature = 15 + QRandomGenerator::global()->generate() % 15;
    qDebug() << "DHT::measureTemperatureSlot(" << temperature << ")";
}
