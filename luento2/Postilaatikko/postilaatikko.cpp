#include "postilaatikko.h"

Postilaatikko::Postilaatikko()
{
    cout << "Luodaan Postilaatikko" << endl;
    maara = 0;
    cout << "maara on " << maara << endl;
}

void Postilaatikko::lisaaPosti(int m)
{
    cout << "lisataan postia " << m << endl;
    maara = maara + m;
    cout << "maara on " << maara << endl;
}

void Postilaatikko::otaPosti(int m)
{
    cout << "otetaan postia" << m << endl;
    maara = maara - m;
    cout << "maara on " << maara << endl;
}

void Postilaatikko::asetaNimi(string n)
{
    cout << "ollaan asetaNimi";
}

