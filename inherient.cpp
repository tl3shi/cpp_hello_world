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

int main()
{
    Son son;
    Parent * p = &son;
    p->fun();
    
    Parent * parent = new PrivateSon();
    PrivateSon * pSon1 = dynamic_cast<PrivateSon*>(parent);
    pSon1->fun();
    return 0;
}
