#ifndef DHT_H
#define DHT_H

#include <QObject>
#include <QThread>

class DHT: public QThread
{
    Q_OBJECT
public:
    DHT();
    ~DHT();

protected:
    virtual void run() override;

public slots:
    void askTemperatureSlot();
    void measureTemperatureSlot();

signals:
    void newTemperatureSignal(float t);

private:
    float temperature;
};

#endif // DHT_H
