#include "testiluokka.h"

Testiluokka::Testiluokka()
{
    cout << "default constructor" << endl;
    teksti = "oletus";
    luku = 1;
    cout << "konstruktori asetettiin luku=" << luku << endl;
    cout << "konstruktori asetettiin teksti=" << teksti << endl;
}

Testiluokka::Testiluokka(int l)
{
    luku = l;
    teksti = "oletus";
    cout << "konstruktori asetettiin luku=" << luku << endl;
    cout << "konstruktori asetettiin teksti=" << teksti << endl;
}

Testiluokka::Testiluokka(string t)
{
    teksti = t;
    luku = 1;
    cout << "konstruktori asetettiin luku=" << luku << endl;
    cout << "konstruktori asetettiin teksti=" << teksti << endl;
}

Testiluokka::Testiluokka(int l, string t)
{
    luku = l;
    teksti = t;
    cout << "konstruktori asetettiin luku=" << luku << endl;
    cout << "konstruktori asetettiin teksti=" << teksti << endl;
}

Testiluokka::~Testiluokka()
{
    cout << "destructor" << endl;
}
