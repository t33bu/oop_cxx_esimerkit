#include <cstdlib>
#include <iostream>
#include <ctime>
#include "dht.h"

using namespace std;

// Hox! uusi tapa alustaa jäsenmuuttujia
// temperature(15) on sama kuin kirjoittaisi
// temperature = 15; konstruktorin sisälle
DHT::DHT(): temperature(15)
{
    cout << "DHT konstruktori temperature=" << temperature << endl;
}

DHT::~DHT()
{
    cout << "DHT destruktori" << endl;
}

void DHT::begin()
{
    cout << "DHT begin" << endl;
    // alustaa satunnaislukugeneraattorin
    srand(time(nullptr));
}

float DHT::readTemperature()
{
    // lämpötila 15 + satunnainen väliltä 0-15
    temperature = 15 + rand() % 15;
    cout << "DHT lampotila=" << temperature << endl;
    return temperature;
}
