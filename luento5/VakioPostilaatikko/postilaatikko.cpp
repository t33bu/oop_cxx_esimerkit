#include "postilaatikko.h"
#include <iostream>

using namespace std;

Postilaatikko::Postilaatikko(string n)
{
    nimi = n;
    maara = 0;

    cout << "Luodaan postilaatikko: "
         << nimi
         << ", laatikossa "
         << maara << endl;
}

Postilaatikko::~Postilaatikko()
{
    cout << "Tuhotaan postilaatikko " << nimi << endl;
}

void Postilaatikko::asetaOsoite(string os)
{
    osoite=os;
}

void Postilaatikko::lisaaPosti(short lisa)
{
    maara += lisa;
    cout << "Lisataan " << nimi << " " << lisa
         << " ,laatikossa " << maara << endl;
}

void Postilaatikko::otaPosti(short ota)
{
    maara -= ota;
    cout << "Otetaan " << nimi << " " << ota
         << " ,laatikossa " << maara << endl;
}

string Postilaatikko::kysyOsoite(void) const
{
    // Hox! vakiojäsenfunktio ei voi muuttaa jäsenmuuttujien arvoja
    // kokeile poistamalla kommentti alta
    // maara = 7;
    return osoite;
}
