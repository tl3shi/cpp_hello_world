#include <iostream>
#include <stdlib.h>
using namespace std;
void test();
const int LENGTH = 10;


int my_sum(int x)
{
    int sum = 0;
    for (int i = 0; i<=x; i++)
        sum = sum + i;
    return sum;
}

int sum_array(int a[], int len)
{
    int sum = 0;
    for (int i = 1 ; i < len; i++)
    {
        //cout<<a[i]<<"  ";
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    test();
/*
    int x = 0;
    int t_sum = 0 ;
    cout<<"input number of x:"<<endl;
    cin>>x;
    t_sum = my_sum(x);
    cout<<"1+2+3+...+"<<x<<"="<<t_sum<<endl;
*/
    return 0;
}
void test()
{
    int a[LENGTH];
    
    for(int j = 123; j < 321; j++)
    {
        for(int i = 0; i < LENGTH; i++)
            a[i] = 0;
        
        int temp = j;
        //cout<<"temp="<<temp; 
        
        int gewei = temp % 10;
        int shiwei = temp / 10 % 10;
        int baiwei = temp / 100;
        a[gewei] = 1;
        a[shiwei] = 1;
        a[baiwei] = 1;
        // cout<<endl<<gewei<<","<<shiwei<<","<<baiwei<<endl; 
        temp = 2 * j;
        // cout<<"temp="<<temp; 
        
        gewei = temp % 10;
        shiwei = temp / 10 % 10;
        baiwei = temp / 100;
        a[gewei] = 1;
        a[shiwei] = 1;
        a[baiwei] = 1;
        
        temp = 3 * j;
        // cout<<"temp="<<temp; 
        
        gewei = temp % 10;
        shiwei = temp / 10 % 10;
        baiwei = temp / 100;
        a[gewei] = 1;
        a[shiwei] = 1;
        a[baiwei] = 1;
        
        // cout<<"j="<<j<<endl;
        int len = sizeof(a) / sizeof(int);
        // cout<<"len = "<<len<<endl;
        int t_sum = sum_array(a, len);    
        // cout<<"sum="<<t_sum<<endl;
        if (t_sum == 9)
        { 
            cout<<j<<","<<2*j<<","<<3*j<<endl;
        }
        /*
         *when j is 334, 3*j=1002 ,baiwei=10
         *index out of bounds 
         */
        if (j == 334)
            exit(0); 
    }

}
