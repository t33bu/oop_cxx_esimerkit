#include <iostream>

using namespace std;

/*
 Tämän esimerkin idea opettaa monta asiaa:
 - Muistellaan C/C++-kielten yhteistä syntaksia
 - Se on kysytty tekoälyltä (!!) ja se ei ole oikeellista C++:aa
 - Jatkossa esitetään miten tämä tulisi oikeasti tehdä C++:lla. Tapoja on useita. 
*/

// Oman funktion prototyyppi
float averageArray(float arr[], int size);

// Paaohjelma
int main()
{
    int size=0;
    cout << "Montako numeroa?" << endl;
    cin >> size;

    float myNumbers[size]; // Tämä ei ole oikein !!
	
    for (int i=0; i < size; i++) {
        cout << "Anna numero? " << endl;
        cin >> myNumbers[i];
    }

    float result = averageArray(myNumbers, size);
    cout << "Keskiarvo on " << result << endl;

    return 0;
}

float averageArray(float arr[], int s) {
    float avg = 0.0;
    for (int i=0; i < s; i++) {
        avg += arr[i];
    }
    avg /= s;

    return avg;
}
