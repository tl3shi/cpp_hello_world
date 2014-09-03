#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    double d1 = 1.0*(5-5);
    double d2 = -1.0*(5-5);
    //map<double, int> m;
    unordered_map<double, int> m;
    m[d1]++;
    m[d2]++;
    cout << m.size() << endl;
    cout << m[d1] << endl;
    cout << m[d2] << endl;
}
