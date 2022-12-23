#include <iostream>
#include <typeinfo>
#include <vector>
#include <limits.h>
#include <array>
using namespace std;
  
//class Class
//{
//public:
//    int r1;
//    int r2;
//};
 
//class Base
//{
//public:
//    Base() = default;
//    
//    void print(const vector<int>& vec, int key) const;
//       
//    ~Base() = default;
//    
//};

//void Base::print(const vector<int>& vec, int key) const
//{
//    if (vec.size() == NULL)
//    {
//        cerr << "Vector is empty (non-print called)";
//    }
//
//    for (int i = 0; i < vec.size(); ++i)
//    {
//        if (key == vec[i])
//        {
//            cout << "Key " << key << " found in [" << i << "] ";
//        }
//    }
//}

 
//constexpr int factorial(int n) noexcept
//{
//    return (n <= 1) ? 1 : n * factorial(n - 1);
//}
class Point
{
public:
    constexpr Point(double xVal = 0, double yVal = 0) noexcept
        : x(xVal), y(yVal) { }
    
    constexpr double xValue() const noexcept { return x; }
    constexpr double yValue() const noexcept { return y; }
    
    void setX(double newX) noexcept { x = newX; }
    void setY(double newY) noexcept { y = newY; }

    void print() { cout << x << " " << y; }

private:
    double x, y;
};

constexpr int f_x(const int x) noexcept
{
    if (x > 3) { return (5 * x * x * x - 12); }
    
    return (x * x + 2 * x + 4);
}

int main()
{   

    int tmp = f_x(4);
    cout << tmp << endl;

    Point p(10.5, 10.1);
    p.print();
    


    /*const auto N = 5;
    array<int, factorial(N)> a;*/


    

    
    /*Class obj;
    Class* ptr;
    
    ptr = &obj;
    cin >> ptr->r1;
    cin >> obj.r2;

    cout << ptr->r1 << endl;
    cout << obj.r2  << endl;

    cout << endl;


    Base b;
    vector<int> vec = { };
    b.print(vec, 40);*/

    
    /*int i_int = 10;
    float f_int = 15.33;
    cout << typeid(i_int).name();
        
    
    const type_info& t1 = typeid(i_int * f_int);

    cout << "\nt1 : " << t1.name();*/
    
    
    /*setlocale(0, "");

    int N, i = 0, sum = 0;
    cout << "Enter num:  ";
    cin >> N;

    
    while (i <= N)
    {
        sum += i;
        i += 5;
    }

    cout << "\n" << sum;*/


   /* try
    {
        size_t N = 0;

        cout << "Warning! If you enter '1', program end!\n";
        do { cout << "> "; cin >> N; } while (N != 1);
    }
    catch (range_error& e)
    {
        cout << "Range error called.";
    }*/

     
    

   












    return 0;
}
