#include <iostream>

using namespace std;

// Prototyyppi
void vaihto(int, int);

int main()
{
    int x = 10;
    int &ref = x;
    // Molemmilla muuttujilla sama arvo
    cout << "x=" << x << " ref=" << ref << endl;
    // Vittausmuuttujan arvoa muuttamalla muuttuu myös alkup muuttuja
    ref = 19;
    cout << "x=" << x << " ref=" << ref << endl;
    // Alkup muuttujan arvoa muuttamalla muuttuu myös viittausmuuttuja
    ref = 27;
    cout << "x=" << x << " ref=" << ref << endl;

    // Esimerkki: vaihto-funktio (joka ei toimi)
    int y = 42;
    cout << "main ennen vaihtoa: x=" << x << " y=" << y << endl;
    vaihto(x,y);
    cout << "main jalkeen vaihdon: x=" << x << " y=" << y << endl;

    return 0;
}

// Vaihdetaan x ja y viittausmuuttujien
// arvot
void vaihto(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
