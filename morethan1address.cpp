#include <iostream>
#include <stdio.h>

using namespace std;
class Base
{
public:
    int a;
    double x;
    char xx;
};

class Derived: public Base
{
public:
    int b;
};

int main()
{
    Derived d;
    d.b = 1;
    Base* b = &d;
    Derived* d2 = &d;
    cout << b << endl;
    cout << d2 << endl;
    printf("%p", b);
    printf("%p", d2);
    return 0;
}
