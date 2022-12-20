#include <iostream>
#include <vector>

using namespace std;


template<int N>
struct Factorial
{
    static int getValue() { return N*Factorial<N-1>::getValue(); }  
    /*if getValue() won't be static : 
        error: cannot call member function ‘int Factorial<N>::getValue() 
            [with int N = 1]’ without object*/

    /*
        What is static?  Static is a keyword in C++ used to give an element 
        a special characteristic.  For static members, memory allocation occurs 
        only once and these members exist until the end of the program.
    */
    

    
};

template <>
struct Factorial<0>
{
    static int getValue() { return 1; }
};




int main()
{
    int x = Factorial<5>::getValue();
    int y = Factorial<0>::getValue();

    cout << x << " " << y;
    return 0;
}

