#include <iostream>
#include <memory>

#include "mittari.h"
#include "lcd.h"
#include "dht.h"

using namespace std;

int main()
{
    // 1. esimerkki: luodaan itsenäiset oliot
    // joita mittari-olio voi käyttää ja annetaan
    // olioiden osoitteet parametrina konstruktorille
    // LCD lcd;
    // DHT lampotilasensori;
    // Mittari mittari(&lcd, &lampotilasensori);

    // 2. esimerkki: käytetään smart pointer-templatea
    // olion luomisessa dynaamisesti
    // unique_ptr<Mittari> o_mittari(new Mittari());

    // 3. esimerkki: perinteinen luodaan olio
    // new-operaattorilla
    Mittari *o_mittari = new Mittari();

    cout << endl;

    o_mittari->setup();
    cout << endl;

    for (int i=0; i < 3; i++)
    {
        o_mittari->mittaus();
    }
    cout << endl;

    // delete o_mittari;

    return 0;
}
