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

struct PrivateSon : /*private*/protected Parent
{
    void fun()
    {
        cout << "Priave Son" << endl;
    }
};

struct A
{
    int a;
};
struct B1: virtual A{int b;};
struct B2: virtual A{};
struct D1: A{};
struct D2: A{};
struct C1: B1,B2
{
};
struct C3: D1,D2
{
};
struct C2: virtual B1,B2
{
};

int main()
{
    Son son;
    Parent * p = &son;
    p->fun();
    
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "sizeof(C1) = " << sizeof(C1) << endl;
    cout << "sizeof(C2) = " << sizeof(C2) << endl;
    cout << "sizeof(C3) = " << sizeof(C3) << endl;
    //Parent * parent = new PrivateSon();
    //PrivateSon * pSon1 = dynamic_cast<PrivateSon*>(parent);
    //pSon1->fun();
    return 0;
}
