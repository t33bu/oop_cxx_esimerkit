#include <iostream>

using namespace std;

// versio: pass by reference
// void vaihda(short &va, short &vb)
// Versio: pass by value
void vaihda(short va, short vb)
{
    cout << "va:n osoite muistissa: " << &va << endl;
    cout << "vb:n osoite muistissa: " << &vb << endl;

    short temp = va;
    va = vb;
    vb = temp;
}

// Versio: käytä osoittimia
void osoitinVaihda(short *va, short *vb)
{
    cout << "osoittimen va osoite muistissa: " << &va << endl;
    cout << "osoittimen va arvo: " << va << endl;
    cout << "osoittimen vb osoite muistissa: " << &vb << endl;
    cout << "osoittimen vb arvo: " << vb << endl;

    short temp = *va;
    *va = *vb;
    *vb = temp;
}

int main()
{
    short a = 27;
    short b = 44;

    cout << "a:n osoite muistissa: " << &a << endl;
    cout << "b:n osoite muistissa: " << &b << endl;

    cout << "ennen vaihtoa a=" << a << " b=" << b << endl;

    // pass by value ei toimi c/c++:ssä.
    // vaihda(a,b);
    // osoittimia käyttäessä muuttujien osoitteet parametriksi
    osoitinVaihda(&a,&b);

    cout << "vaihdon jalkeen a=" << a << " b=" << b << endl;

    return 0;
}

