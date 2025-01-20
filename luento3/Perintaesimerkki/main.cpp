#include <iostream>
#include "b.h"

using namespace std;

int main()
{
    // käyttää defaultkonstruktoria luokille A ja B
    B b_olio;
    // käyttää konstruktoria, jossa b:lle arvo
    // B b_olio2(11);
    // käyttää konstruktoria, jossa b:lle ja a:lle arvo
    // a:n arvo välittyy luokan A konstruktoriin
    // B b_olio3(11, 22);

    // kutsutaan B:n julkista jäsenfunktiota
    // b_olio.public_B();
    // kutsutaan A:sta perittyä julkista jäsenfunktiota
    // b_olio.public_A();
    // kutsutaan A:sta perittyjä jäsenfunktiota
    // b_olio.allfuncs_A();

    return 0;
}
