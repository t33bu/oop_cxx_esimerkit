#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main()
{
    B b_olio;
    // kutsutaan B:n julkista jäsenfunktiota
    b_olio.public_B();
    // kutsutaan A:sta perittyä julkista jäsenfunktiota
    b_olio.public_A();
    // kutsutaan A:sta perittyjä jäsenfunktiota
    b_olio.funcs_A();

    return 0;
}
