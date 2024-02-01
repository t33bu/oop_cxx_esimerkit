#include "a.h"

A::A()
{
    cout << "A konstruktori" << endl;
}

A::A(int a)
{
    cout << "A konstruktori, parametri a=" << a << endl;
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
