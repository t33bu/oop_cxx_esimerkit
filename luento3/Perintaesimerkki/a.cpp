#include "a.h"

A::A()
{
    cout << "A defaultkonstruktori" << endl;
    variable_A = -1;
    cout << "variable_A=" << variable_A << endl;
}

A::A(int a) 
{
    cout << "A konstruktori, parametri a=" << a << endl;
    variable_A = a;
    cout << "variable_A=" << variable_A << endl;
}

A::~A()
{
    cout << "A destruktori" << endl;
}

void A::public_A()
{
    cout  << "Kutsuttiin public A, "
          << "variable_A=" << variable_A << endl;
}

void A::protected_A()
{
    cout  << "Kutsuttiin protected A, "
          << "variable_A=" << variable_A << endl;
}

void A::private_A()
{
    cout  << "Kutsuttiin private A, "
          << "variable_A=" << variable_A << endl;
}
