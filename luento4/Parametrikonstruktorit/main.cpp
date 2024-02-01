#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main()
{
    // Kokeile luentotallenteen mukaan erilaisia
    // konstruktoreja parametrien kanssa ja ilman
    // A a_olio;
    // B b_olio;

    // Luodaan A-olio parametrilla
    A a_olio(7);

    // Luodaan B-olio, jossa parametri välittyy
    // yliluokan A konstruktorille
    B b_olio(4);

    return 0;
}
