#include <iostream>
using namespace std;
struct A
{
    string name;
    A():name("xx"){
        cout << "constr" << endl;
    }
    A(string i):name(i)
    {
        cout << "constr" << endl;
    }
    A(const A & str)
    {
        cout << "copy constr" << endl;
    }
    A & operator = (const A &a){
        cout << "====" << endl;
    }
};
void fun(A a)
{
}
int main()
{
    fun(A());
    cout << "\n\n\n\n\n" << endl;
    A a;
    cout << "\n\n\n\n\n" << endl;
    fun(a);
    return 0;
}
