#ifndef MITTARI_H
#define MITTARI_H

#include "lcd.h"
#include "dht.h"

class Mittari
{
public:
    Mittari();
    ~Mittari();

    void setup(void);
    void mittaus(void);

private:
    int varoitusvalo;
    LCD lcd;
    DHT lampotilasensori;
};

#endif // MITTARI_H
