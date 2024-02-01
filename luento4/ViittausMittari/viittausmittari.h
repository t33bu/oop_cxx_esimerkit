#ifndef VIITTAUSMITTARI_H
#define VIITTAUSMITTARI_H

#include "lcd.h"
#include "dht.h"

class ViittausMittari
{
public:
    ViittausMittari(LCD &l, DHT &d);
    ~ViittausMittari();

    void setup(void);
    void mittaus(void);

private:
    int varoitusvalo;
    // viittausjäsenoliot
    LCD &viittaus_lcd;
    DHT &viittaus_dht;
};

#endif // VIITTAUSMITTARI_H
