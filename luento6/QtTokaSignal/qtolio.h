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
    void lahetaParametri(int p);

public slots:
    void mySlot();
    void myParameterSlot(int s);

// signaaleille ei tehdä toteutuksia
signals:
    void mySignal();
    void myParameterSignal(int s);
};

#endif // QTOLIO_H
