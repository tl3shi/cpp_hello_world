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
   virtual ~B(){}
};

struct B1 //1(+7) + 8
{
    char bb;
    virtual void fun()
    {
         cout << "B1 func" << endl;
    }
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
    D1()
    {
        cout << "D1()" << endl;
    }
    ~D1(){
    cout << "~D1()" << endl;
    }
};

struct D2:B1
{
    D2()
    {
        cout << "d2" << endl;
    }
    ~D2(){
        
    }
};
void testalignvitual()
{
    cout << sizeof(B) << endl;
    cout << sizeof(B1) << endl;
    cout << sizeof(D) << endl;
    cout << sizeof(D1) << endl;
    cout << sizeof(D2) << endl;
}
int main()
{
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
    D1 d1;
    typedef void(*func_pointer)(void); //for win, ok, mac wrong, access error
    func_pointer fp = (func_pointer)*((int*)*(int*)(&d1));//b
    fp();//B func1
    fp = (func_pointer)*((int*)*(int*)(&d1)+1);
    fp();//B func2
    fp = (func_pointer)*((int*)*(int*)(&d1)+4);//b1 
    fp();//B1 func

    int **vtable = (int**)&d1;
    fp = (func_pointer)vtable[0][0];
    fp();//B fun1
    fp = (func_pointer)vtable[0][1];
    fp();//B fun2
    fp = (func_pointer)vtable[0][2];//! ~D1(); access error
    //fp();//

    fp = (func_pointer)vtable[0][3]; //fp = 0x00c6f260 {test.exe!const D1::`RTTI Complete Object Locator'{for `B1'}}
    //fp();
    fp = (func_pointer)vtable[0][4]; 
    fp();// B1 func//

    
    return 0;
}
