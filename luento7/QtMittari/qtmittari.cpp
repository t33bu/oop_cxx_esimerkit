#include "qtmittari.h"

QtMittari::QtMittari(QObject *parent)
    : QObject{parent}
{
    qDebug() << "Mittari konstruktori";
}

QtMittari::~QtMittari()
{
    qDebug() << "Mittari destruktori";
}

void QtMittari::beginSlot()
{
    qDebug() << "Mittari: Vastaanotettiin signaali begin";
    qDebug() << "Mittari: Lahetetaan signaali readTemperature";
    emit readTemperatureSignal();
}

void QtMittari::temperatureSlot(float newtemp)
{
    temperature = newtemp;
    qDebug() << "Mittari: Vastaanotettiin signaali temperature "
             << temperature;
    qDebug() << "Mittari: Lahetetaan signaali print "
             << temperature;
    emit printSignal(temperature);
}

void QtMittari::printOkSlot()
{
    qDebug() << "Mittari: Vastaanotettiin signaali printOk";
    qDebug() << "Mittari: Lahetetaan signaali finished" << Qt::endl;
    emit finished();
}
