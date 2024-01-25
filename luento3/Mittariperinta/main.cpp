#include <iostream>
#include "mittari.h"

using namespace std;

int main()
{
    Mittari mittari;
    cout << endl;

    mittari.setup();
    cout << endl;

    mittari.mittaus();
    cout << endl;

    return 0;
}
