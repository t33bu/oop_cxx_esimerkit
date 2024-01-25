#include "b.h"

B::B()
{
    cout  << "B konstruktori" << endl;
}

B::~B()
{
    cout  << "B destruktori" << endl;
}

void B::public_B()
{
    cout  << "public B" << endl;
}

void B::funcs_A()
{
    // käytetään B:ssä A:sta perittyjä jäseniä

    // public jäsenfunktio, public-perintä
    public_A();
    // protected ok, koska public-perintä
    protected_A();
    // ei voi kutsua koska yksityinen jäsenfunktio
    // private_A();

    // protected jäsenmuuttuja peritty A:sta,
    // public-perinnässä voidaan käyttää aliluokan sisällä
    variable_A = 42;
    cout << "variable_A=" << variable_A << endl;
}

