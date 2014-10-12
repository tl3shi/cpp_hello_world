#include <iostream>
using namespace std;
struct A
{
    int i;
    A():i(1){
    }
};
struct B:A
{
    int i;
    B():i(2){}
};
int main()
{
    B * b = new B();
    A * a = new B();
    cout << b->i << endl;//2
    cout << a->i << endl;//1

    return 0;
}
