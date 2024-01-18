#include <iostream>
#include "mittari.h"

using namespace std;

int main()
{
    Mittari mittari;
    cout << endl;

    mittari.setup();
    cout << endl;

    for (int i=0; i < 3; i++)
    {
        mittari.mittaus();
    }
    cout << endl;

    return 0;
}
