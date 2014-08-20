//#include <priority_queue>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

void gen(int *data, int n)
{
    for(int i = 0; i < n; i++)
        data[i] = rand() % 100;
}
void print(int *data, int n)
{
    for(int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
}
void myheapsort(int *data, int n)
{
    //// wrong, data is 4/8 byte priority_queue<int> v(data, data + sizeof(data)/sizeof(int));
    //priority_queue<int> v;//default, the top is biggest,
    priority_queue<int, vector<int>, greater<int>> v; // increaseing seq, the top is smallest
    for(int i = 0; i < n; i++)
        v.push(data[i]);
    for(int i = 0; i < n; i++)
    {
        data[i] = v.top(); v.pop();
    }
}
int main()
{
    const int n = 10;
    int data[n];
    gen(data, n);
    print(data, n);
    myheapsort(data, n);
    print(data, n);
}
