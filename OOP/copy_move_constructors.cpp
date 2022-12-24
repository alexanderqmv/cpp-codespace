// copy algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector
#include <assert.h>
 



class MyClass
{
public:
    MyClass() = default;

    MyClass(int numberOne = 1, int numberTwo = 1)
        : f_number(numberOne), s_number(numberTwo)
    {
        assert(f_number  >  0);
        assert(s_number  >  0);
    }

    inline MyClass(const MyClass&  myclass) noexcept
        : f_number(myclass.f_number), s_number(myclass.s_number)
    {
        std::cout << "(Copy Constructor) :: called\n";
    }
    
    inline MyClass(MyClass&& other) noexcept
    {
        f_number = other.f_number;
        s_number = other.s_number;
        
        other.f_number = NULL;
        other.s_number = NULL;
    }

    friend std::ostream& operator<<(std::ostream& out, const MyClass& d1);
     

private:
    int f_number;
    int s_number;

};

std::ostream& operator<<(std::ostream& out, const MyClass& d1)
{
    out << d1.f_number << "  " << d1.s_number << std::endl;
    return out;
}


int main() {
   
     

     
    
    MyClass m(50,49);
    MyClass m2 = m;
    MyClass m3(m2);
    std::cout << m2 << '\n' << m3;
   
    MyClass m4 = std::move(m2);
    MyClass m5 = std::move(m4);

    std::cout << std::endl;

    std::cout << std::endl << m5;
    
    
    
    
    
    /* int myints[] = { 10,20,30,40,50,60,70 };
    
    std::vector<int> myvector(7);
     
    std::copy(myints, myints + 7 , myvector.begin());

    std::cout << "myvector contains:";
    
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;

    

    std::cout << '\n';*/

    return 0;
}
