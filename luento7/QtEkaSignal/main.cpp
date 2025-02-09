#include <QCoreApplication>
#include <QDebug>
#include "qtolio.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QtOlio o(&a);
    o.laheta();

    qDebug() << "main QT-sovellus käyntiin..";
    a.exec();

    return 0;
}
