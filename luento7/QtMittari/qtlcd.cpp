#include "qtlcd.h"

QtLCD::QtLCD(QObject *parent) : QObject{parent}
{
    qDebug() << "LCD konstruktori" << Qt::endl;
}

QtLCD::~QtLCD()
{
    qDebug() << "LCD destruktori";
}

void QtLCD::printSlot(float temperature)
{
    qDebug() << "LCD: Vastaanotettiin signaali print" << temperature;
    qDebug() << "LCD: Tulostetaan lampotila " << temperature;
    qDebug() << "LCD: Lahetetaan signaali printOk";
    emit printOkSignal();
}
