#ifndef LCD_H
#define LCD_H

#include <string>

using namespace std;

class LCD
{
public:
    LCD();
    ~LCD();

    void begin(void);
    void print(float temp);

private:
    string text;
};

#endif // LCD_H
