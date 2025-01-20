#include "b.h"

B::B()
{
    cout  << "B defaultkonstruktori" << endl;
    variable_B = -1;
    cout << "variable_B=" << variable_B << endl;
}

B::B(int b)
{
    cout << "B konstruktori, parametri b=" << b << endl;
    variable_B = b;
    cout << "variable_B=" << variable_B << endl;
}

B::B(int b, int a)
    : A(a)
{
    cout << "B konstruktori, parametri b=" << b
         << " ja parametri a=" << a << endl;
    variable_B = b;
    cout << "variable_B=" << variable_B << endl;
}

B::~B()
{
    cout  << endl << "B destruktori" << endl;
}

void B::public_B()
{
    cout  << "Kutsuttiin public B, "
          << "variable_B=" << variable_B << endl;
}

void B::allfuncs_A()
{
    // käytetään B:ssä A:sta perittyjä jäseniä
    cout  << "Kutsuttiin public allfuncs_A" << endl;

    // public jäsenfunktio, public-perintä
    public_A();
    // protected ok, koska public-perintä
    protected_A();
    // ei voi kutsua koska yksityinen jäsenfunktio
    // private_A();

    // oma jäsenmuuttuja
    variable_B = 42;
    cout << "variable_B=" << variable_B << endl;
    // protected jäsenmuuttuja variable_A peritty A:sta
    // voidaan käyttää kuin omaa jäsenmuuttujaa!
    variable_A = 42;
    cout << "variable_A=" << variable_A << endl;
}

