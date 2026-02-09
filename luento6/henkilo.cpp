#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Henkilo {
public:
    string nimi;
    int ika;

    Henkilo(string n, int i) {
        nimi=n, ika=i;
    }
};

int main() {

    vector<Henkilo> ryhma;

    // luodaan oliot vektoriin parametreillä
    ryhma.emplace_back("Bob", 25);
    ryhma.emplace_back("Charlie", 28);
    ryhma.emplace_back("Alice", 23);
    ryhma.emplace_back("David", 22);

    vector<Henkilo> nuoret;
    int ikaraja = 25;

    // kopioidaan nuoret-säiliöön, jos ikä alle 25
    copy_if(ryhma.begin(), ryhma.end(), back_inserter(nuoret), [ikaraja](const Henkilo& a){
        return a.ika < ikaraja;
    });

    // järjestellään nuoret iän mukaan nuorimmasta vanhimpaan
    sort(nuoret.begin(), nuoret.end(), [](const Henkilo &a, const Henkilo &b){
        return a.ika < b.ika;
    });

    // tulostetaan säiliön olioiden tiedot
    // hox! auto-muuttujatyypin käyttö
    for (auto it = nuoret.begin(); it != nuoret.end(); ++it) {
        cout << it->nimi << " on " << it->ika << " vuotta vanha" << endl;
    }
}


