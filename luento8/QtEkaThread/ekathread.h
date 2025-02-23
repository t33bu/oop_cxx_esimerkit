#ifndef EKATHREAD_H
#define EKATHREAD_H

#include <QObject>
#include <QThread>

class EkaThread : public QThread
{
    Q_OBJECT
public:
    EkaThread(QString nimi, int period);
    ~EkaThread();

    virtual void run() override;

private:
    int period = 0;
    QString nimi;
};

#endif // EKATHREAD_H
