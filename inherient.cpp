#include <iostream>
using namespace std;

struct Grand
{
    virtual void fun()
    {
        cout << "Grand" << endl;
    }
};

struct Parent : Grand
{
    void fun() //this is also virtual
    {
        cout << "Parent" << endl;
    }
};

struct Son : Parent
{
    void fun()
    {
        cout << "Son" << endl;
    }
};

int main()
{
    Son son;
    Parent * p = &son;
    p->fun();
    
    return 0;
}
