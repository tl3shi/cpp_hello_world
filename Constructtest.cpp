//
//  Constructtest.cpp
//  leetcode
//
//  Created by tanglei.name on 14-5-31.
//  Copyright (c) 2014年 tanglei.name. All rights reserved.
//
#include <iostream>
using namespace std;

//#define INIT

struct A
{
    int a;
    A(int aa):a(aa)
    {
        cout << "A(int aa):a(aa)" << endl;
    }
    A(const A &another)
    {
        a = another.a;
        cout << "A(const A &another)" << endl;
    }
    A()
    {
        cout << "A()" << endl;
    }
    void operator = (const A &another)
    {
        cout << "operator = (const A &another)" << endl;
        a = another.a;
    }
};

struct B
{
    A a;
    

#ifndef INIT
    /*
     A(int aa):a(aa)
     A()
     operator = (const A &another)
     B()
     */
     B(const A &v)
    {
        a = v;
        cout << "B()" << endl;
    }
#else
    /**
     A(int aa):a(aa)
     A(const A &another)
     B()
     */
    B(const A &v):a(v)
    {
        cout << "B()" << endl;
    }
#endif
    
    
    B(const B &another)
    {
        cout << "B(const B &another)" << endl;
    }
};

int main()
{
    A v(1);
    B b(v);
    /*cout << "----" << endl;
    A a1;
    A a2 = a1;
    a1 = a2;
    A a3 = a1;*/
}
