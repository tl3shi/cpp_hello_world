#include <iostream>
using namespace std;

struct Base
{
    Base()
    {
        log();
    }
    virtual void log()
    {
        cout << "Base log" << endl;
        cout << "typeid" << typeid(*this).name() << endl;
    }
    virtual ~Base(){}
};

struct Derived: Base
{
    virtual void log()
    {
        cout << "Derived log" << endl;
        cout << "typeid" << typeid(*this).name() << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}
