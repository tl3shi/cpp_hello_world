#include <iostream>
using namespace std;

struct Blank
{
};

struct Foo: Blank
{
    int p;
};

struct Foo2
{
    Blank b2[2];
    int p;
    Blank b;
};

struct Foo3
{
    int p;
    Blank b;
    Blank b2[2];
};



int main()
{
    cout << "sizeof(Blank) = " << sizeof(Blank) << endl;
    cout << "sizeof(Foo) = " << sizeof(Foo) << endl;
    Blank  blanks[100];
    Foo foos[100];
    cout << "sizeof(blanks[100]) = " << sizeof(blanks) << endl;
    cout << "sizeof(foos[100]) = "<< sizeof(foos) << endl;
    cout << "sizeof(Foo2) = " << sizeof(Foo2) << endl;
    cout << "sizeof(Foo3) = " << sizeof(Foo3) << endl;
    return 0;
}
