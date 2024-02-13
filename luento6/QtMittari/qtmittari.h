#ifndef QTMITTARI_H
#define QTMITTARI_H

#include <QObject>
#include <QDebug>

class QtMittari : public QObject
{
    Q_OBJECT
public:
    explicit QtMittari(QObject *parent = nullptr);
    virtual ~QtMittari();

public slots:
    void beginSlot();
    void temperatureSlot(float newtemp);
    void printOkSlot();

signals:
    void readTemperatureSignal();
    void printSignal(float printtemp);
    void finished();

private:
    float temperature;
};

#endif // QTMITTARI_H
