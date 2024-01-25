#ifndef MITTARI_H
#define MITTARI_H

#include "lcd.h"
#include "dht.h"

class Mittari : public DHT, public LCD
{
public:
    Mittari();
    ~Mittari();

    void setup(void);
    void mittaus(void);

private:
    int varoitusvalo;
};

#endif // MITTARI_H
