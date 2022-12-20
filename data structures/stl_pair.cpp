#include <iostream>
#include <vector>
#include <string>

#define MAX(a,b)  ((a>b)?a:b)
#define MIN(a,b)  ((a<b)?a:b)
using namespace std;

// method overloading for ::int:: and ::double:: types
int substract(int a, int b)
{
    return a - b;
}
double substract(double a, double b)
{
    return a - b;
}

namespace max {
    template<typename T>
    T max(const T d1, const T d2)
    {
        if (d1 > d2)
        {
            return d1;
        }
        return d2;
    }
}

template<typename T>
void Swap(T& d1, T& d2)
{
    T tmp(d1);
    d1 = d2;
    d2 = tmp;
}


namespace pr
{
    class pair
    {
        public:
            
            pair() = default;
            pair(const string &a, const int b) 
            : first(a), second(b) { }

            void print_pair_object()
            {
                cout << first << "  " << second << endl;
            }

        
            string first;
            int second;
        
    };  
}
// template overloading begin
template<typename T, typename S>
void foo(T a, S b)
{
    cout << "a and b " << a << " " << b << endl;
}

template<typename S>
void foo(string a, S b)
{
    cout << "Here, first parameter is a string" << endl;
}
// template overloading end

int main()
{
    cout << MAX(11.5,111.5) << endl;
    cout << MIN(111.5, 11.5);

    cout << endl << max::max<int>(10,40);
    
    int a(10), b(20);

    Swap<int>(a,b);

    cout << endl << "after swap: " << a << " " << b;

    cout << endl;

    
    pair<string,int> d;
    vector<pair<string,int>> v;
    
    

    d.first = "Alexander  | C++";
    d.second = 15;
    v.push_back(d);

    d.first = "Ann   | Typescript & Javascript";
    d.second = 34;
    v.push_back(d);

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << '\t' << v[i].second << endl; 
    }
    
    pr::pair p;
    
    vector<pr::pair> vec;
    p.first = "Nick   | C#";
    p.second = 17;
    vec.push_back(p);

    p.first = "Stassy | JavaScript";
    p.second = 31;
    vec.push_back(p);

    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i].first << '\t' << vec[i].second << endl;
    }

    cout << endl;
    cout << "\nFOR EACH: \n";
    for (auto e : vec)
    {
        e.print_pair_object();
    }    

    string s{"Koba"};
    foo("Koba", 2020);
    foo(s, 2020);
    
    
    
    return 0;
}
