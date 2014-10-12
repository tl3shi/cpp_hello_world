#include <iostream>
using namespace std;

extern int arrayA[];
extern int arrayB[20];

//D:\github\cpp_hello_world>g++ -c sizeof1.cpp
//D:\github\cpp_hello_world>g++ -c sizeof2.cpp
//D:\github\cpp_hello_world>g++ sizeof2.o sizeof1.o -o sizeofmain.exe
//D:\github\cpp_hello_world>sizeofmain.exe
//80
//19
//0
//9
int main()
{
    //cout<<sizeof(arrayA)<<endl;            //编译出错！！
    cout<<sizeof(arrayB)<<endl;
    cout << arrayB[8] << endl;
    cout << arrayB[10] << endl;
    cout << arrayA[8] << endl;
    return 0;
}

