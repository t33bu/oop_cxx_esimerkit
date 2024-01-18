#include <cstdlib>
#include <iostream>
#include <ctime>
#include "dht.h"

using namespace std;

DHT::DHT()
{
    cout << "DHT konstruktori" << endl;
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

float DHT::getTemperature()
{
    // lämpötila 15 + satunnainen väliltä 0-15
    temperature = 15 + rand() % 15;
    cout << "DHT lampotila: "
         << temperature << endl;
    return temperature;
}

void DHT::setTemperature(float newTemperature)
{
    temperature = newTemperature;
}
