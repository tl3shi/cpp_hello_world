// bad_cast example
#include <iostream>       // std::cout
#include <typeinfo>       // std::bad_cast

class Base {virtual void member(){}};
class Derived : Base {};

int main () {
    try
    {
        Base b;
        Derived* rdp = dynamic_cast<Derived*>(&b);
        if(rdp == nullptr)
            std::cout << "Derived* rdp = dynamic_cast<Derived*>(&b); rdp is NULL" << std::endl;
        Derived& rd = dynamic_cast<Derived&>(b);
        std::cerr << "Derived& rd = dynamic_cast<Derived&>(b); throw a std::bad_cast exception " << std::endl;
    }
    catch (std::bad_cast& bc)
    {
        std::cerr << "bad_cast caught: " << bc.what() << '\n';
    }
    return 0;
}
