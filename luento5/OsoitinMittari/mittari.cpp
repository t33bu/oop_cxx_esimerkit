#include <iostream>
#include "mittari.h"
#include "lcd.h"
#include "dht.h"

using namespace std;

// kaksi erilaista konstruktoria
Mittari::Mittari()
{
    cout << "Dynaaminen Mittari konstruktori" << endl;
    osoitinLCD = new LCD();
    osoitinSensori = new DHT();
}

Mittari::Mittari(LCD *ol, DHT *os)
{
    cout << "Osoitin Mittari konstruktori" << endl;
    // Osoitin-jäsenmuuttujiin talteen olioiden
	// osoitteet parametreistä
    osoitinLCD = ol;
    osoitinSensori = os;
}

Mittari::~Mittari()
{
    cout << "Mittari destruktori" << endl;
    // desktuktorin toiminta riippuu nyt
    // kumpaa konstruktoria käytettiin
    delete osoitinLCD;
    delete osoitinSensori;
}

void Mittari::setup()
{
    cout << "Mittari setup" << endl;
	// Kutsutaan jäsenfunktioita osoittimien avulla
    osoitinLCD->begin();
    osoitinSensori->begin();
}

void Mittari::mittaus()
{
    cout << "Mittari mittaus " << endl;
	// Kutsutaan jäsenfunktioita osoittimien avulla
    float temperature = osoitinSensori->readTemperature();
    osoitinLCD->print(temperature);

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

