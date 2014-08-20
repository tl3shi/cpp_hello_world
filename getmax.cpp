#include <iostream>
#include <cmath>
using namespace std;

void testmax()
{
    int a = 1;
    int b = 5;
    unsigned int d1 = a-b;
    unsigned int d2 = b-a;
    cout << (d1 >> 31) << endl;//1 d1 <0, a < b
    cout << (d2 >> 31) << endl;//0 d2 >0, b > a
    d2 =  a - a;
    cout << (d2 | 0x0) << endl; //0, d2 = 0
    int max = (a+b + abs(a-b))>>1;
    cout << max << endl;
}
int global = 1111;
int main()
{
    int global = global;
    cout << "global="<< global << endl;
    testmax();
}
