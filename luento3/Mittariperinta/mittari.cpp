#include "mittari.h"
#include <iostream>

using namespace std;

Mittari::Mittari()
{
    cout << "Mittari konstruktori" << endl;
}

Mittari::~Mittari()
{
    cout << "Mittari destruktori" << endl;
}

void Mittari::setup()
{
    cout << "Mittari setup" << endl;
    DHT::begin();
    LCD::begin();
}

void Mittari::mittaus()
{
    cout << "Mittari mittaus " << endl;
    float temperature = readTemperature();
    print(temperature);

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

