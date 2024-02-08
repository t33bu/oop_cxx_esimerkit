#include <iostream>

using namespace std;

// luokan esittely
class C {

public:
    C();
    int c_muuttuja;
    double jotaki;
    int c_toinen;
};

C::C() : c_muuttuja(22), c_toinen(33), jotaki(1.1) {

}

/*
int main()
{
    int b = 42;
    int *o_b = &b;

    cout << "b:n arvo: " << b << endl;
    cout << "b:n osoite muistissa: " << &b << endl;
    cout << "o_b:n arvo: " << o_b << endl;
    cout << "o_b:n osoituksen arvo: " << *o_b << endl;

    int b = 42;
    cout << "b:n arvo: " << b << endl;
    cout << "b:n osoite muistissa: " << &b << endl;

    float d = 1.234;
    cout << "d:n arvo: " << d << endl;
    cout << "d:n osoite muistissa: " << &d << endl;

    C c;
    cout << "Olion c osoite muistissa: " << &c << endl;
    cout << "c.c_muuttuja:n arvo: " << c.c_muuttuja << endl;
    cout << "c.c_muuttuja:n osoite: " << &c.c_muuttuja << endl;
    cout << "c.c_toinen:n arvo: " << c.c_toinen << endl;
    cout << "c.c_toinen:n osoite: " << &c.c_toinen << endl;

    cout << "c.jotaki:n osoite: " << &c.jotaki << endl;

    return 0;
}
*/
