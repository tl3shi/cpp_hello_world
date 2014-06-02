#include <iostream>
using namespace std;

void f(int i)
{
    cout << "f(int i)" << endl;
}

void g(const int &i)
{
    cout << "g(const int &i)" << endl;
}


int main()
{
    int i = 0;
    f(i);
    g(i);
    return 0;
}
