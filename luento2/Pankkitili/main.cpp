#include <iostream>
#include "pankkitili.h"

using namespace std;

int main()
{
    Pankkitili pk("Roope Rahakas", "4321");

    pk.setSaldo(150);

    pk.kirjaudu("6487");
    pk.kirjaudu("4321");

    cout << "Omistaja "
         << pk.getOmistaja()
         << ", tilin saldo "
         << pk.getSaldo()
         << endl;

    return 0;
}
