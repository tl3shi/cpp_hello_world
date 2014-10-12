#include <iostream>
using namespace std;
struct A
{
    //virtual ~A(){}
};
struct B
{
   // virtual ~B(){}
   //int c;
};
struct C: virtual B
{
};

struct D: virtual B
{
};
struct E: C, D
{
};
int main()
{
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    cout << sizeof(D) << endl;
    cout << sizeof(E) << endl;
    return 0;
}
