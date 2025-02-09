#include "qtdht.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

QtDHT::QtDHT(QObject *parent) : QObject{parent}
{
    qDebug() << "DHT konstruktori";
    // alustaa satunnaislukugeneraattorin
    srand(time(nullptr));
}

QtDHT::~QtDHT()
{
    qDebug() << "DHT desktruktori";
}

void QtDHT::readTemperatureSlot()
{
    qDebug() << "DHT: Vastaanotettiin signaali readTemperature";

    // lämpötila 15 + satunnainen väliltä 0-15
    temperature = 15 + rand() % 15;
    qDebug() << "DHT: Luetaan sensorilta arvo" << temperature;

    qDebug() << "DHT: Lahetetaan signaali temperature "
         << temperature;
    emit temperatureSignal(temperature);
}
