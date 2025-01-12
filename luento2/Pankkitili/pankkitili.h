#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>

using namespace std;

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string om, string pk);
    ~Pankkitili();

    double getSaldo() const; // Selitys kooditiedostossa
    void setSaldo(double newSaldo);
    string getOmistaja() const;
    bool kirjaudu(string pk);

private:
    bool authenticated;
    double saldo;
    string omistaja;
    string pinkoodi; // Ei tehdä getteriä tai setteriä
};

#endif // PANKKITILI_H
