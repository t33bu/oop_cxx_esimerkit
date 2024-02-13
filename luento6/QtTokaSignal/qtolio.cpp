#include "qtolio.h"

QtOlio::QtOlio(QObject *parent)
    : QObject{parent}
{
    qDebug() << "QtOlio konstruktori";
}

void QtOlio::laheta()
{
    qDebug() << "QtOlio lähetä mySignal";
    emit mySignal();
}

void QtOlio::lahetaParametri(int p)
{
    qDebug() << "QtOlio lähetä myParameterSignal p=" << p;
    emit myParameterSignal(p);
}

void QtOlio::mySlot()
{
    qDebug() << "QtOlio mySlot, vastaanotti signaalin";
}

void QtOlio::myParameterSlot(int s)
{
    qDebug() << "QtOLio myParameterSlot, vastaanotti s=" << s << Qt::endl;
}
