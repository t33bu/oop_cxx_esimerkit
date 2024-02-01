#include <iostream>
#include "viittausmittari.h"

using namespace std;

ViittausMittari::ViittausMittari(LCD &l, DHT &d) :
    // Hox! heti tässä konstruktorin alussa viittaukset kuntoon
    viittaus_lcd(l), viittaus_dht(d)
{
    varoitusvalo = 0;
    cout << "ViittausMittari konstruktori" << endl;
}

ViittausMittari::~ViittausMittari()
{
    cout << "ViittausMittari destruktori" << endl;
}

void ViittausMittari::setup()
{
    cout << "ViittausMittari setup" << endl;
    viittaus_lcd.begin();
    viittaus_dht.begin();
}

void ViittausMittari::mittaus()
{
    cout << "ViittausMittari mittaus " << endl;
    float temperature = viittaus_dht.readTemperature();
    viittaus_lcd.print(temperature);

    if (temperature < 20.0)
    {
        varoitusvalo = 1;
    }
    else
    {
        varoitusvalo = 0;
    }
    cout << "\tVaroitusvaro " << varoitusvalo << endl;
}

