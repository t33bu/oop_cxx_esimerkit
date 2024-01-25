#include "a.h"

A::A()
{
    cout << "A konstruktori" << endl;
}

A::~A()
{
    cout << "A destruktori" << endl;
}

// virtuaalinen jäsenfunktio toteutus
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
