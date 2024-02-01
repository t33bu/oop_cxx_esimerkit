#include "b.h"

B::B() : A(7)
{
    cout  << "B konstruktori" << endl;
}

B::B(int b) : A(b)
{
    cout  << "B konstruktori, parametri b=" << b << endl;
}

B::~B()
{
    cout  << "B destruktori" << endl;
}

void B::public_B()
{
    cout  << "public B" << endl;
}

void B::public_A()
{
    cout << "public A, eiku B" << endl;
}
