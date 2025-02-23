#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*
    QTimer timer;
    timer.setInterval(1000);
    timer.start();
    */

    return a.exec();
}
