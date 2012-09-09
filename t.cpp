#include <iostream>
using namespace std;

class B
{
public:
    B()
    {
        cout<<"B()"<<endl;
    }
    B(int a)
    {
        cout<<"B(int "<<a<<")"<<endl;
    }
};

class A
{
    B b;
    B b1;
public:
    A():b1(500)
    {
        cout<<"A()"<<endl;
    }
    A(int a):b1(a)
    {
        cout<<"A(int "<<a<<")"<<endl;
    }
};

int main()
{
    A a;
    A a1(2);
    return 0;
}
