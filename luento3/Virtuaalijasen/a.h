#ifndef A_H
#define A_H
#include <iostream>

using namespace std;

// yliluokka
class A
{
public:
    A();
    ~A();

    // virtuaalinen jäsenfunktio
    // hox! edessä sana virtual
    virtual void public_A();

protected:
    void protected_A();

private:
    void private_A();

};

#endif // A_H
