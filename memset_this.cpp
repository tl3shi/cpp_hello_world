#include <iostream>
using namespace std;
//ref http://bbs.csdn.net/topics/390633634?page=1
class ClassA
{
public:
    ClassA()
    {
        cout<<"A: "<<this<<endl;
        Clear();
    }
    
    void Clear()
    {
        cout << typeid(*this).name() << sizeof(*this) << endl;
        memset(this,0,sizeof(*this));
    }
    
    ~ClassA()
    {
    }
    virtual void func()
    {
        cout<<"func.A "<<endl;
    }
};

class ClassB:public ClassA
{
public:
    ClassB()
    {
        cout<<"B: "<<this<<endl;

        cout << typeid(*this).name() << sizeof(*this) << endl;
    }
    void func()
    {
        cout<<"func.B "<<endl;
    }
    
};

int main()
{
    
    ClassA a;
    ClassB b;
    
    ClassA *pa = &a;
    ClassA *pab = &b;
    ClassB* pb = &b;
    
    a.func();    //1 func.A
    b.func();	//2 func.B
    //pa->func();	//3 异常
    pab->func();	//4 func.B
    pb->func();	//5 func.B
    return 1;
} 
