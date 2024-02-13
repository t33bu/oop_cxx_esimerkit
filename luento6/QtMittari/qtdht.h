#ifndef QTSENSORI_H
#define QTSENSORI_H

#include <QObject>
#include <QDebug>

class QtDHT : public QObject
{
    Q_OBJECT
public:
    explicit QtDHT(QObject *parent = nullptr);
    virtual ~QtDHT();

public slots:
    void readTemperatureSlot();

signals:
    void temperatureSignal(float temperature);

private:
    float temperature;
};

#endif // QTSENSORI_H
