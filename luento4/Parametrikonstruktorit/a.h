#ifndef A_H
#define A_H
#include <iostream>

using namespace std;

// yliluokka B:lle
class A
{
public:
    A();
    A(int a);
    ~A();

    virtual void public_A();

protected:
    void protected_A();

private:
    void private_A();

};

#endif // A_H
