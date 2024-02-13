#ifndef QTLCD_H
#define QTLCD_H

#include <QObject>
#include <QDebug>

class QtLCD : public QObject
{
    Q_OBJECT
public:
    explicit QtLCD(QObject *parent = nullptr);
    virtual ~QtLCD();

public slots:
    void printSlot(float temperature);

signals:
    void printOkSignal();
};

#endif // QTLCD_H
