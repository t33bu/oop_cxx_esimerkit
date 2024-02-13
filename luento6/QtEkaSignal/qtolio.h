#ifndef QTOLIO_H
#define QTOLIO_H

#include <QObject>
#include <QDebug>

class QtOlio : public QObject
{
    Q_OBJECT
public:
    explicit QtOlio(QObject *parent = nullptr);
    void laheta(void);

public slots:
    void mySlot();

// signaaleille ei tehdä toteutuksia
signals:
    void mySignal();
};

#endif // QTOLIO_H
