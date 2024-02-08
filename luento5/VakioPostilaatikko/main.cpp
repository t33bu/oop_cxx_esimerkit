#include <iostream>
#include "postilaatikko.h"

using namespace std;

// static-jäsenmuuttujalle arvo olion ulkopuolella
string Postilaatikko::osoite = "Katu 1";

int main()
{
    Postilaatikko a("Aakkonen");
    Postilaatikko b("Peekkonen");

    cout << a.kysyNimi() << ": " << a.kysyOsoite() << endl;
    cout << b.kysyNimi() << ": " << b.kysyOsoite() << endl;
    cout << endl;

    // Hox! molempien osoite muuttuu vaikka
    // käytetään a:n jäsenfunktiota koska static jäsenmuuttuja
    a.asetaOsoite("Katu 2");

    cout << a.kysyNimi() << ": " << a.kysyOsoite() << endl;
    cout << b.kysyNimi() << ": " << b.kysyOsoite() << endl;
    cout << endl;

    // kutsutaan static-jäsenfunktiota olion ulkopuolelta
    Postilaatikko::asetaOsoite("Katu 3");

    cout << a.kysyNimi() << ": " << a.kysyOsoite() << endl;
    cout << b.kysyNimi() << ": " << b.kysyOsoite() << endl;

    cout << endl;
    return 0;
}
