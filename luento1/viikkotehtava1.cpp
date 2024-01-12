#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "yykaakoo" << endl;
    srand(time(NULL));
    int satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;
    satluku = rand() % 40;
    cout << satluku << endl;

    return 0;
}