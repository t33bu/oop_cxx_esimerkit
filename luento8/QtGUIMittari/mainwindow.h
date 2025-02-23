#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dht.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateTemperatureSlot(float t);

private slots:
    void on_pushButton_clicked();

signals:
    void askTemperatureSignal();

private:
    Ui::MainWindow *ui;
    DHT *lampotilaSensori;
};
#endif // MAINWINDOW_H
