#include <QCoreApplication>

#include "ekathread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    EkaThread eka("eka",1000);
    EkaThread toka("toka",3000);

    eka.start();
    toka.start();

    return a.exec();
}
