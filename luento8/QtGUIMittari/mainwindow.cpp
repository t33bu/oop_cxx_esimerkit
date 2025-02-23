#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug() << "Mainwindow konstruktori";

    lampotilaSensori = new DHT();
    lampotilaSensori->start();

    QObject::connect(lampotilaSensori,SIGNAL(newTemperatureSignal(float)),
            this,SLOT(updateTemperatureSlot(float)));
    QObject::connect(this,SIGNAL(askTemperatureSignal()),
            lampotilaSensori,SLOT(askTemperatureSlot()));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    qDebug() << "Mainwindow destruktori";

    lampotilaSensori->quit();
    // lampotilaSensori->wait();
    delete lampotilaSensori;
    lampotilaSensori = nullptr;

    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Mainwindow::on_pushButton_clicked()";
    qDebug() << "Mainwindow -> askTemperatureSignal()";
    emit askTemperatureSignal();
}

void MainWindow::updateTemperatureSlot(float t)
{
    qDebug() << "Mainwindow::updateTemperatureSlot(" << t << ")";
    ui->lcdNumber->display(t);
}

