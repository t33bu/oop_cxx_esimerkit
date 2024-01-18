#include <iostream>
#include "lcd.h"

using namespace std;

LCD::LCD()
{
    cout << "LCD konstruktori" << endl;
}

LCD::~LCD()
{
    cout << "LCD destruktori" << endl;
}

void LCD::begin()
{
    cout << "LCD begin" << endl;
    text = "";
}

void LCD::print(float temp)
{
    // standardikirjastosta to_string()
    text = to_string(temp);
    cout << "LCD print: "
         << text << endl;
}
