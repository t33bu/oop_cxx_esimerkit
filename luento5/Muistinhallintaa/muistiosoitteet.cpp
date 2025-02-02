#include <iostream>
// Uusi otsikkotiedosto smart pointerien käyttöön
#include <memory>

using namespace std;

// luokan esittely
class Muistiesimerkki
{
public:
    void tulosta()
    {
        cout << "eka=" << eka
             << ", toka=" << toka
             << ", jotaki=" << jotaki
             << endl;
    }

    int eka; //  = 0;
    int toka; // = 0;
    double jotaki; // = 0;
};

int main()
{
    int b = 42;

    // osoitinmuuttuja esitellään *-operaattorilla
    // &-operaattori antaa muuttujan osoitteen
    int *o_b = &b;

    cout << "b = " << b << endl;
    cout << "b:n osoite: " << &b << endl;
    cout << "o_b = " << o_b << endl;
    cout << "o_b:n osoittaa arvoon: " << *o_b << endl;
    cout << "o_b:n osoite: " << &o_b << endl;
    cout << endl;

    // Muutetaan b:n arvo osoittimen avulla
    *o_b = 27;
    cout << "Uusi b:n arvo osoittimella: " << b << endl;
    cout << endl;

    float d = 1.234;
    cout << "d = " << d << endl;
    cout << "d:n osoite: " << &d << endl;
    cout << endl;

    // Luodaan olio staattisesti
    Muistiesimerkki me;
    cout << "Olion me osoite: " << &me << endl;
    cout << "eka osoite: " << &me.eka << endl;
    cout << "toka osoite: " << &me.toka << endl;
    cout << "jotaki osoite: " << &me.jotaki << endl;
    me.tulosta();
    cout << endl;

    // Luodaan olio dynaamisesti new-operaattorilla
    Muistiesimerkki *dyn_me = new Muistiesimerkki();
    // nyt jäsenfunktioita kutsutaan nuoli-operaattori
    dyn_me->tulosta();
    // Tuhotaan olio muistista
    delete dyn_me;

    // Hyvä tietää !!
    // Luodaan olio smart pointerilla (vaatii c++ v14)
    unique_ptr<Muistiesimerkki> smart_me = make_unique<Muistiesimerkki>();
    smart_me->tulosta();
    // Nyt ei oliota tarvitse tuhota!

    return 0;
}
