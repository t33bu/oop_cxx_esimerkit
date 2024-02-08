#ifndef MITTARI_H
#define MITTARI_H

#include "lcd.h"
#include "dht.h"

class Mittari
{
public:
    // kaksi erilaista konstruktoria osoittimia käyttäen
    Mittari();
    Mittari(LCD *ol, DHT *os);
    ~Mittari();

    void setup(void);
    void mittaus(void);

private:
    int varoitusvalo;
    // Osoittimet LCD- ja DHT-luokkiin
    LCD *osoitinLCD;
    DHT *osoitinSensori;
};

#endif // MITTARI_H
