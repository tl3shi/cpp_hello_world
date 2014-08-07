#include <cstdio>
#include <iostream>
using namespace std;

struct A
{
    int a;
};
int main()
{
    printf("%f\n", 1);
    printf("%d\n", 6.01);
    cout << (int*)&A::a <<;
    return 0;
}
