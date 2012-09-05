#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int multi(int, int);
int cal(int, int, int (*fp)(int, int));

int main(void)
{
    int a = 4;
    int b = 3;
    char * op[] = {"+", "-", "x"};
    int (*pf[])(int, int) = {add, sub, multi};
    for (int i = 0; i < 3; i++)
        cout << a << op[i] << b << "=" << cal(a, b, pf[i]) << endl;
    return 0;
}

int cal(int a, int b, int (*fp)(int, int))
{
    return (*fp)(a,b);
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
