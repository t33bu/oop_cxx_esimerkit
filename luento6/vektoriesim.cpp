#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Funktioiden prototyypit
void vektoriesim(void); // esimerkki vektorista
void iteratoresim(void); // esimerkki iteraattorista

int main()
{
    // vektoriesim();
    // iteratoresim();

    return 0;
}

// esimerkki vektorista
void vektoriesim(void) {

    vector<int> numbers;
    numbers.reserve(10); // Jos koko on määritelty (?)

    // Lisataan alkioita aina loppuun
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Poistetaan alkio lopusta
    numbers.pop_back();

    cout << "Vektorin koko: " << numbers.size() << endl;
    cout << "Vektorin kapasiteetti: " << numbers.capacity() << endl;

    // Tarkista ettei vektori ole tyhja ennen kayttoa
    if (numbers.empty() == false) {
        numbers[0] = numbers[0] + 1;
    }

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

}

// esimerkki iteraattorista
void iteratoresim() {
    vector<int> numbers = { 5, 3, 8, 1, 2 };

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

    // luodaan iteraattori vektorin alkuun
    vector<int>::iterator it;

    // lajitellaan vektori
    sort(numbers.begin(), numbers.end());

    cout << "Lajitellut alkiot: ";
    // kaytetaan iteraattoria silmukassa
    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Etsitaan arvoa iteraattorilla
    int valueToFind = 3;
    it = find(numbers.begin(), numbers.end(), valueToFind);
    if (it != numbers.end()) {
        cout << "Etsitty arvo=" << valueToFind << " indeksissa "
             << distance(numbers.begin(), it) << endl;
    } else {
        cout << "Arvo=" << valueToFind << " ei loytynyt " << endl;
    }
}
