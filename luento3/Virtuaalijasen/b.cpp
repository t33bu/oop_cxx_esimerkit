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

// virtuaalisen jäsenfunktion uudelleentoteutus
void B::public_A()
{
    cout << "public A, eiku B" << endl;
}
