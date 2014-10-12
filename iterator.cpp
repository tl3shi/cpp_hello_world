#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> x(5, 1);
    auto addr = x.begin();
    cout << (int*)addr << endl;
}
