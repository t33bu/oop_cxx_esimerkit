#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // alustetaan progressbar
    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);

    // alustetaan statusbar
    ui->statusbar->showMessage("Valmista: 0");

    // luodaan 1s ajastin
    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    // kytketaan ajastinsignaali progressbarin updateen
    connect(timer, &QTimer::timeout,this, &MainWindow::progressUpdateSlot);
}

MainWindow::~MainWindow()
{
    if (timer) {
        timer->stop();
        delete timer;
    }
    delete ui;
}

void MainWindow::progressUpdateSlot()
{
    // paivitetaan tyota
    tyo += 10;
    ui->progressBar->setValue(tyo);
    qDebug() << "Tyo=" << tyo;
    // paivitetaan statusbar
    ui->statusbar->showMessage("Valmista: " + QString::number(tyo));
    // tarkistetaan onko tyo valmis
    if (tyo == 100) {
        timer->stop();
        qDebug() << "Tyo valmis!";
        ui->statusbar->showMessage("Tyo valmis!");
    }
}

void MainWindow::on_singleShot_clicked()
{
    // Kerran pyörähtävä ajastin lambdafunktiolla
    QTimer::singleShot(1000, []{
        qDebug("Single shot timer!");
    });
}

