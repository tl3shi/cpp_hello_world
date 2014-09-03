#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char * s = new char[20];
    strcpy(s, "hello world");
    cout << s << endl;
    delete [] s;
    s = NULL;//if not, the next line will wrong.
    delete [] s;
    if(s != NULL)
        cout << s << endl;
}
