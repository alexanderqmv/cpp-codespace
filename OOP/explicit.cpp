#include <iostream>

class Implicit
{
public:
    Implicit(int v) : mV{v}
    {
        std::cout << "Implicit constructor called." << std::endl;
    }
private:
    int mV;
};

class Explicit
{
public:
    // Use explicit specifier for explicit constructor
    explicit Explicit(int v) : mV{v}
    {
        std::cout << "Explicit constructor called." << std::endl;
    }
private:
    int mV;
};

int main()
{
    // Explicit initialization
    Implicit implicit1{1};
    Implicit implicit2(1);
    // Non-explicit initializations might be confusing to readers
    Implicit implicit3 = {1};
    Implicit implicit4 = 1;
    // Default copy constructor called
    Implicit implicit5 = implicit1;

    // Explicit initialization
    Explicit explicit1{1};
    Explicit explicit2(1);
    // explicit specifier prevents non-explicit initialization
    // Explicit explicit3 = {1}; // Invalid
    // Explicit explicit4 = 1; // Invalid
    // Default copy constructor called
    Explicit explicit5 = explicit1;
}
