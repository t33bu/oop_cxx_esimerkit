#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "main Qt-konsolisovelluksen suoritus alkaa.. eika lopu" << Qt::endl;
    // käynnistetään Qt-pääohjelma
    a.exec();
    return 0;
}
