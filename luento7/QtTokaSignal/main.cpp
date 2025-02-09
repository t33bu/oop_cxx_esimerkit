#include <QCoreApplication>
#include <QDebug>
#include "qtolio.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QtOlio o(&a);
    QtOlio p(&a);

    qDebug() << "main kytketään o:n mySignal -> p:n mySlot";
    QObject::connect(&o,               // lähettävä olio
            SIGNAL(mySignal()), // lähetettävä signaali
            &p,               // vastaanottava olio
            SLOT(mySlot())      // vastaanottava slot
            );
    // Hox! kytkentä on nyt yhteen suuntaan o:sta p:hen,
    // ja vain annetulle signaalille ja slotille
    // kytkentä p:sta o:hon vaatisi oman connect-kutsun
    o.laheta();
    qDebug();

    // Kytketään toinen signaali p:sta o:hon jossa parametri
    qDebug() << "main kytketään p:n myParameterSignal -> o:n myParameterSlot";
    QObject::connect(&p,               // lähettävä olio
            SIGNAL(myParameterSignal(int)), // lähetettävä signaali
            &o,               // vastaanottava olio
            SLOT(myParameterSlot(int))      // vastaanottava slot
            );
    p.lahetaParametri(42);

    qDebug() << "main Qt-sovellus käyntiin..";
    a.exec();

    return 0;
}
