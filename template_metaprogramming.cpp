#include <iostream>
using namespace std;
template <int T>
struct F
{
    enum{value = T * F<T-1>::value};
};

template<>
struct F<0>
{
    enum{value = 1};
};

int main()
{
    cout << F<5>::value << endl;
    return 0;
}
