#include "pankkitili.h"

Pankkitili::Pankkitili()
{
    cout << "Pankkitili konstruktori" << endl;

    omistaja = "Olli Omistaja";
    pinkoodi = "0000";
    saldo = 0;
    authenticated = false;

    cout << "Luodaan tili: "
         << omistaja
         << endl;
}

Pankkitili::Pankkitili(string om, string pk)
{
    cout << "Pankkitili konstruktori" << endl;

    omistaja = om;
    pinkoodi = pk;
    saldo = 0;
    authenticated = false;

    cout << "Luodaan tili: "
         << omistaja
         << endl;
}

Pankkitili::~Pankkitili()
{
    cout << "Pankkitili destruktori" << endl;
}

bool Pankkitili::kirjaudu(string pk)
{
    cout << "Kirjautuminen: ";
    if (pinkoodi == pk) {
        cout << "Pinkoodi ok!" << endl;
        authenticated = true;
        return true;
    } else {
        cout << "Vaara pinkoodi!" << endl;
        authenticated = false;
        return false;
    }
}

// Const-funktiot eivät voi muokata jäsenmuuttujia
double Pankkitili::getSaldo() const
{
    if (authenticated == true) {
        return saldo;
    } else {
        return 0;
    }
}

void Pankkitili::setSaldo(double newSaldo)
{
    saldo += newSaldo;
    cout << "Lisattiin tilille "
         << newSaldo
         << ", saldo "
         << saldo
         << endl;
}

string Pankkitili::getOmistaja() const
{
    return omistaja;
}
