#include<iostream>
#include <cstring>
using namespace std;
union B
{
    //union的存放顺序是所有成员都从低地址开始存放
    int i;
    char c;
};
void useUnion()
{
    B b;
    b.i = 1;
    cout << "address: low-->high" <<endl;
    if(b.c == 1)
    {
        cout << "4 byte in B: 1 0 0 0 " << endl;
        cout << "Little_endian" << endl;
    }else
    {
        cout << "4 byte in B: 0 0 0 1 " << endl;
        cout << "Big_endian" << endl;
    }
}
void useInt()
{
    cout << "address: low-->high" <<endl;
    int i = 1;
    char * p = (char*)&i;
    if(*p == 1)
    {
        cout << "4 byte in B: 1 0 0 0 " << endl;
        cout << "Little_endian" << endl;
    }else
    {
        cout << "4 byte in B: 0 0 0 1 " << endl;
        cout << "Big_endian" << endl;
    }
}
int main()
{
    useUnion();
    useInt();
    B b;
    b.i = 0x12345678;
    cout << "0x78=" << (char)0x78 << "=" << b.c << endl; 
    int x = 0x44434241;
    //0x41 = 65 = 'A' //Litter_endian
    char * p = (char*)&x;
    cout << *p << endl; //A
    cout << *(p+1) << endl; //B
    cout << *(p+3) << endl; //D
    return 0;
}

