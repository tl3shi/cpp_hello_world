#include <iostream>
int global = 111;
struct G
{
    int i;
    G():i(5)
    {
        std::cout << "G()" << std::endl;
    }
    G(int x):i(x)
    {
        std::cout << "G(x)" << std::endl;
    }
    G(const G&g)
    {
        i = g.i;
        std::cout << "G(const G&g)"<< std::endl;
    }
};

G g(1);
int main(){
    int global = global;
    std::cout <<  "global=" << global << std::endl;
    G g = g;
    std::cout << g.i << std::endl;
}
