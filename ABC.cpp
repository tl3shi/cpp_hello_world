#include <iostream>
using namespace std;
struct A
{
    virtual void fun1(){}
    virtual ~A()
    {
        cout << "virtual ~A()" << endl;
    }
};
struct B
{
    virtual void fun2(){}
    virtual ~B()
    {
        cout << "virtual ~B()" << endl;
    }
};

struct C : B,A
{
    virtual ~C()
    {
        cout << "virtual ~C()" << endl;
    }
};

int main()
{
    C * c = new C();
    A * p1 = (C*)c;
    B * p2 = (B*)c;
    delete p1;
    return 0;
}
