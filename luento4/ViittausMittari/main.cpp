#include <iostream>

#include "viittausmittari.h"
#include "lcd.h"
#include "dht.h"

using namespace std;

int main()
{
    /*
    int vastaus = 42;
    // Ja sitten viittausmuuttuja &-merkillä
    // Hox! v_ alaliite on vain opettajan merkintätapa
    // jotta viittausmuuttuja erottuu esimerkeissä,
    // sitä ei ole pakko käytttää
    int &v_vastaus = vastaus;

    cout << "vastaus " << vastaus << endl;
    cout << "v_vastaus " << v_vastaus << endl;

    // koska viittausmuuttuja on alias, päivittyy myös
    // "alkuperäisen" muuttujan arvo
    v_vastaus = 56;

    cout << "vastaus " << vastaus << endl;
    cout << "v_vastaus " << v_vastaus << endl;
    */

    DHT alkup_dht;
    LCD alkup_lcd;
    ViittausMittari v_mittari(alkup_lcd,alkup_dht);

    v_mittari.setup();
    for (int i=0; i < 3; i++) {
        v_mittari.mittaus();
    }

    return 0;
}
