#include "qtolio.h"

QtOlio::QtOlio(QObject *parent, QString n)
    : QObject{parent}
{
    nimi = n;
    qDebug() << "QtOlio " << nimi << " konstruktori";
}

void QtOlio::laheta()
{
    qDebug() << "QtOlio " << nimi << " lähetä mySignal";
    emit mySignal();
}

void QtOlio::lahetaParametri(int p)
{
    qDebug() << "QtOlio " << nimi << " lähetä myParameterSignal p=" << p;
    emit myParameterSignal(p);
}

void QtOlio::mySlot()
{
    qDebug() << "QtOlio " << nimi << " vastaanotti signaalin";
}

void QtOlio::myParameterSlot(int s)
{
    qDebug() << "QtOLio " << nimi << " vastaanotti singaalin, parametri s=" << s << Qt::endl;
}
