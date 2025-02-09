#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sisainen luokka
class Student {

public:
    Student(string n, int g) {
        name = n;
        grade = g;
    }
    // operaattorin "pienempi kuin" overload
    bool operator < (const Student& s) const {
            return grade < s.grade;
    }
    string name;
    int grade;
};

// apufunktio etsintaan
bool etsiParhaat(const Student &s) {
    return s.grade >= 90;
}

// apufunktio etsintään jossa lambdafunktio
/*
auto etsiParhaat(int kynnys) {
    // lambdafunktio []
    return [kynnys](const Student &s) {
        return s.grade >= kynnys;
    };
}
*/

int main() {
    vector<Student> oppilaat = { {"Bob", 92}, {"Charlie", 85}, {"Alice", 92} };
    oppilaat.push_back({"Dave", 88});

    cout << "Oppilaat " << endl;
    // for (Student s: oppilaat) {
    for (auto &s: oppilaat) {
        cout << s.name << ": " << s.grade << endl;
    }

    // kaytetaan luokan pienempi kuin-operaattoria
    sort(oppilaat.begin(), oppilaat.end());

    cout << endl << "Lajiteltu arvosanan perusteella" << endl;
    for (auto &s: oppilaat) {
        cout << s.name << ": " << s.grade << endl;
    }

    // kopioidaan toiseen vektoriin arvosanan 90 ylittaneet
    // tarvitaan apufunktio vertailuun
    vector<Student> parhaat;
    copy_if(oppilaat.begin(), oppilaat.end(), back_inserter(parhaat), etsiParhaat);
    // copy_if(oppilaat.begin(), oppilaat.end(), back_inserter(parhaat), etsiParhaat(90));

    cout << endl << "Parhaat" << endl;
    for (auto &s: parhaat) {
        cout << s.name << ": " << s.grade << endl;
    }

}
