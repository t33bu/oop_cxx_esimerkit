#include <iostream>

using namespace std;

class Henkilo {
public:
    string nimi;
    int ika;

    Henkilo(string n, int i) {
        nimi=n, ika=i;
    }

};

// Container-luokka
template <typename T> class Container {
public:
    // konstruktorissa täytyy aina alustaa jäsenmuuttuja!
    Container(const T &v) : value(v) {}

    T getValue() {
        return value;
    }

    void setValue(T &v) {
        value = v;
    }

private:
    T value;
};

int main() {

    Container<int> number(42);
    cout << "number: " << number.getValue() << endl;

    Henkilo olli("Olli opiskelija",22);
    Container<Henkilo> opiskelija(olli);
    cout << "Henkilo: " << opiskelija.getValue().nimi << ", "
         << opiskelija.getValue().ika << endl;

    return 0;
}
