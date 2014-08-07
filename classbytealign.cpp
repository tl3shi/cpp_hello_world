/*
字节对齐的细节和具体编译器实现相关，但一般而言，满足三个准则：
1. 结构体变量的首地址能够被其最宽基本类型成员的大小所整除；
2. 结构体每个成员相对于结构体首地址的偏移量都是成员大小的整数倍，如有需要编译器会在成员之间加上填充字节；
3. 结构体的总大小为结构体最宽基本类型成员大小的整数倍，如有需要编译器会在最末一个成员之后加上填充字节。
*/
#include <iostream>
using namespace std;
struct A // 5(+3)+4+2(+2) = 16
{
    char name[5];
    int num;
    short score;
};

struct A1 // 4 + 5(+1) + 2 = 12
{
    int num;
    char name[5];
    short score;
};

struct B // 24
{
    char a; //4
    int b; //4
    double c; //8
    bool d;//8!!
};
void print(const B &b1, const B &b2)
{
    cout << "a: " << (long)&(b1.b) - (long)&(b1.a) << endl; //4
    cout << "b: " << (long)&(b1.c) - (long)&(b1.b) << endl; //4
    cout << "c: " << (long)&(b1.d) - (long)&(b1.c) << endl; //8
    cout << "d: " << (long)&(b2.a) - (long)&(b1.d) << endl; //8
}

struct BB //40
{
    char a; //1+7
    B b; // 24, 里面最大的double 8个字节，BB里面的对齐也按照这个8对齐
    int c;//4
    char x[2];//2+2
};

//找出最大长度的成员长度（结构体的长度一定是该成员的整数倍）
struct C //24
{
    char a; //8 这个按照8对齐
    double b; //8 最大为8
    char c; // 1+3
    int d; // 4
};


int main()
{
    cout << sizeof(A) << endl; //16
    cout << sizeof(A1) << endl; //12
    cout << sizeof(B) << endl; //24
    B b[2];
    print(b[0],b[1]);
    cout << sizeof(C) << endl; //24
    cout << sizeof(BB) << endl; //40
    return 0;
}
