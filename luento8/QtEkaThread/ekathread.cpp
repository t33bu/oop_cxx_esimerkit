#include "ekathread.h"
#include <QDebug>

EkaThread::EkaThread(QString nimi, int period)
{
    this->period = period;
    this->nimi = nimi;
    qDebug() << nimi << "konstruktori, period" << this->period;
}

EkaThread::~EkaThread()
{
    qDebug() << nimi << "destruktori";
}

void EkaThread::run()
{
    while (true) {
        msleep(period);
        qDebug() << nimi << "odottaa " << period;
    }
}
