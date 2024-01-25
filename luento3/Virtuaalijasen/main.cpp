#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main()
{
    B b_olio;

    // kutsutaan virtuaalifunktiota:
    // suoritus riippuu siitä onko
    // uudelleentoteutusta vai ei
    b_olio.public_A();

    return 0;
}
