#include "qtolio.h"

QtOlio::QtOlio(QObject *parent)
    : QObject{parent}
{
    qDebug() << "QtOlio konstruktori";
    qDebug() << "QtOlio kytketään mySignal -> mySlot";
    connect(this,               // lähettävä olio
            SIGNAL(mySignal()), // lähetettävä signaali
            this,               // vastaanottava olio
            SLOT(mySlot())      // vastaanottava slot
            );
    // Tällä kytkennällä olio lähettää signaalin itselleen
    // this-osoittimen avulla
}

void QtOlio::laheta()
{
    qDebug() << "QtOlio laheta(), lähetetään mySignal";
    emit mySignal();
}

void QtOlio::mySlot()
{
    qDebug() << "QtOlio mySlot, vastaanotti signaalin";
}
