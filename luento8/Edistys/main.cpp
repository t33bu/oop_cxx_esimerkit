#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /* Kerran pyörähtävä ajastin, joka suorittaa lambda-funktion
    QTimer::singleShot(1000, []{
        qDebug("Hello from lambda");
    });
    */

    return a.exec();
}
