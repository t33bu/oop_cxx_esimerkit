#include <iostream>

using namespace std;

// Oman funktion prototyyppi
int printletters(string);

// Paaohjelma
int main()
{
    string input;
    cout << "Give text I will count the letters in it!" << endl;
    cin >> input;
    int cntLetters = printletters(input);
    cout << "String " << input << " has " << cntLetters << " letters" << endl;

    return 0;
}

// Oman funktion runko
int printletters(string in) {
    int cnt=0;

    for (auto iterator = in.begin(); iterator != in.end(); iterator++) {
        cout<<"letter: " << *iterator << endl;
        cnt++;
    }
    return cnt;
}


