#ifndef B_H
#define B_H
#include <iostream>
#include "a.h"

using namespace std;

// aliluokka
class B: public A
{
public:
    B();
    B(int b);
    B(int b, int a);
    ~B();

    void public_B();
    void allfuncs_A();

protected:
    int variable_B;
};

#endif // B_H
