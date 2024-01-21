#ifndef TESTILUOKKA_H
#define TESTILUOKKA_H

#include <iostream>

using namespace std;

class Testiluokka
{
public:
    Testiluokka();
    Testiluokka(int l);
    Testiluokka(string t);
    Testiluokka(int l, string t);

    ~Testiluokka();

private:
    int luku;
    string teksti;
};

#endif // TESTILUOKKA_H
