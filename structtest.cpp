#include <stdio.h>
struct A
{
    int a;
    //D:\github\cpp_hello_world>gcc -x c structtest.cpp
    //structtest.cpp:7:5: error: expected ‘:’, ‘,’, ‘;’, ‘}’ or ‘__at
    // _’ before ‘{’ token
    void print() // pure c, this is not allowd
    {
        printf("a printf %d\n", a);
    }
};
 
struct B : A
{
    int b;
    B(int bb)
    {
        b = bb;
        a = -1;
    }
    B(){b = 0; a = 2;}
};

class C
{
public:  // if there's no pubic, cannot use this way:  C c = {11};
    int c;
    char d;
    void func() //normal function(no construct/inherit .etc OO properties), you can also use this way:   C c = {11};
    {
        printf("%d, %c\n", c, d);
    }
    //C(){}
};


struct D
{
    int c;
    char d;
    D() // if there's no Construct or some other OO properties(like inherit), you can use this way:  D d = {1,'y'}
    {
        c = -1;
        d = 'x';
    }
};

struct E
{
    int c;
    char d;
    void func() //normal function, you can also use this way:   E e = {2,'z'};  
    {
        printf("%d, %c\n", c, d);
    }
};


struct AA
{
private:
    int a;
public:
    int b;
};
class BClass: AA
{
public:
    void fun()
    {
        printf("%d\n", b);
    }
};
struct BStruct: AA
{
    void func()
    {
        printf("%d\n", b);
    }
};


struct Base
{
    virtual void fun()
    {
        printf("Base\n");
    }
};
struct Child: Base
{
    void fun()
    {
        printf("Child\n");
    }
};

int main()
{
    B b, b1(1);
    printf("%d, %d \n", b.b, b.a);
    printf("%d, %d \n", b1.b, b1.a);
    A a = {10};
    printf("%d\n", a.a);
    C c = {11, 'a'};
    C c1 = {'d'}; //convert to int 
    C c2 = {}; //init with default
    C c3; 
    printf("%d, %c\n", c.c, c.d);
    printf("%d, %c, %d\n", c1.c, c1.d, c1.d);
    printf("%d, %d\n", c2.c, c2.d);
    printf("%d, %c\n", c3.c, c3.d);//uninit, vs2012 will show Run-Time Check Failure #3 window, 
    c3.func();//uninit, but this way will pass the "Run-Time Check" in vs2012
    //D d = {1,'y'}; //error: in C++98 ‘d’ must be initialized by constructo not by ‘{...}’
    //printf("%d, %c\n", d.c, d.d);

    E e = {2,'z'};  
    printf("%d, %c\n", e.c, e.d);
    e.func();


    BClass bclass;
    BStruct bstruct;
    bclass.fun();
    bstruct.func();
    //printf("%d", bclass.b); // “AA::b”不可访问，因为“BClass”使用“private”从“AA”继承
    printf("%d\n", bstruct.b); //OK

    Base base;
    Child child;
    base.fun();
    child.fun();
    Base* base2 = &child;
    base2->fun();

    return 0;
}
 
