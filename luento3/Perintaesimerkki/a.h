#ifndef A_H
#define A_H
#include <iostream>

using namespace std;

// yliluokka
class A
{
public:
    A();
    A(int a);
    ~A();

    void public_A();

protected:
    void protected_A();
    int variable_A;

private:
    void private_A();

};

#endif // A_H
