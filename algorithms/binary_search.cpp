// copy algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector
#include <assert.h>
 



//class MyClass
//{
//public:
//    MyClass() = default;
//
//    MyClass(int numberOne = 1, int numberTwo = 1)
//        : f_number(numberOne), s_number(numberTwo)
//    {
//        assert(f_number  >  0);
//        assert(s_number  >  0);
//    }
//
//
//    inline MyClass(const MyClass&  myclass) noexcept
//        : f_number(myclass.f_number), s_number(myclass.s_number)
//    {
//        std::cout << "(Copy Constructor) :: called\n";
//    }
//    
//    inline MyClass(MyClass&& other) noexcept
//    {
//        f_number = other.f_number;
//        s_number = other.s_number;
//        
//        other.f_number = NULL;
//        other.s_number = NULL;
//    }
//
//    friend std::ostream& operator<<(std::ostream& out, const MyClass& d1);
//     
//
//private:
//    int f_number;
//    int s_number;
//
//};
//
//std::ostream& operator<<(std::ostream& out, const MyClass& d1)
//{
//    out << d1.f_number << "  " << d1.s_number << std::endl;
//    return out;
//}

int bin_search(std::vector<int>& vec,int x)
{
    int left = 0;
    
    int right = vec.size() - 1;

    if (vec.size() == NULL)
    {
        throw "Container is empty. Please, fill it.";
    }

    while (left <= right)
    {
        
        int mid = left + (right - left) / 2;
        if (vec[mid] == x)
        {
            return mid;
        }
        else if (vec[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;


}

int main() {
   
    setlocale(0, "");
    
    std::vector<int> vec = { 12, 13, 14 ,15, 17, 17, 18, 19, 20, 21, 22 ,23, 24, 25 ,28, 29 ,100, 2003 };
 
    try
    {
        std::cout << "Key found in [" << bin_search(vec, 17) << "]\n";
    }
    catch (const char* err)
    {
        std::cout << err << std::endl;
    }
    /*MyClass m(50,49);
    MyClass m2 = m;
    MyClass m3(m2);
    std::cout << m2 << '\n' << m3;
   
    MyClass m4 = std::move(m2);
    
    MyClass m5 = std::move(m4);

    std::cout << std::endl;

    std::cout << std::endl << m5;*/
    
    
    
    
    
    /* int myints[] = { 10,20,30,40,50,60,70 };
    
    std::vector<int> myvector(7);
     
    std::copy(myints, myints + 7 , myvector.begin());

    std::cout << "myvector contains:";
    
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;

    

    std::cout << '\n';*/

    return 0;
}
