#include "a.h"

A::A()
{
    cout << "A konstruktori" << endl;
    variable_A = 67;
    cout << "variable_A=" << variable_A << endl;
}

A::~A()
{
    cout << "A destruktori" << endl;
}

void A::public_A()
{
    cout << "public A" << endl;
}

void A::protected_A()
{
    cout << "protected A" << endl;
}

void A::private_A()
{
    cout << "private A" << endl;
}
