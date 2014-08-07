#include <iostream>
using namespace std;

struct Base
{
    Base()
    {
        log();
    }
    virtual void log()
    {
        cout << "Base log" << endl;
        cout << "typeid" << typeid(*this).name() << endl;
    }
    virtual ~Base(){}
};

struct Derived: Base
{
    virtual void log()
    {
        cout << "Derived log" << endl;
        cout << "typeid" << typeid(*this).name() << endl;
    }
};

struct B //16+8
{
    char a; //4
    int b; //4
    short c; //2
    char d[5]; //1+4

    virtual void func1()
    {
        cout << "B func1" << endl;
    }
    virtual void func2()
    {
        cout << "B func2" << endl;
    }
};

struct B1 //1(+7) + 8
{
    char bb;
    virtual void fun(){}
};

//24
//16
//48
struct D: B,B1
{
    char x[5];
    double dd;
};
//24
//16
//56, vitual table放在前面，
struct D1: B,B1
{
    double dd;
    char x;
};

struct D2:B1
{
};
int main()
{
    cout << sizeof(B) << endl;
    cout << sizeof(B1) << endl;
    cout << sizeof(D) << endl;
    cout << sizeof(D1) << endl;
    cout << sizeof(D2) << endl;
    return 0;
    
    Derived d;
    #ifdef property
    printf("&B::a=%p\n", &B::a);
    printf("&B::b=%p\n", &B::b);
    printf("&B::c=%p\n", &B::c);
    printf("&B::d=%p\n", &B::d);
    #endif
    cout << endl;
    printf("&B::func1=%p\n", &B::func1);
    printf("&B::func2=%p\n", &B::func2);
    B b;
    printf("&b=%p\n", &b);
#ifdef property
    printf("&b.a=%p\n", &b.a);
    cout << (int*)&b.a - (int*)&b << endl; 
#endif
    cout << (int*)(&b) << endl;
    cout << (int*)(*(int*)(&b)) << endl;
    cout <<"XX" <<endl;
    typedef void(*func_pointer)(void);
    func_pointer fp = NULL;
    cout << "fp:" << endl;
    return 0;
}
