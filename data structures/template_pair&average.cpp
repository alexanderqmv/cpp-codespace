#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

namespace pr
{   
    template<class T, class S>
    class pair
    {
        public:
            T first;
            S second;

            pair() = default;
            pair(const T& first, const S& second) 
            {
                this->first = first;
                this->second = second;
            }

            void print()
            {
                cout << first << " " << second << endl;
            }
            
    };
}

template<typename T>
T average(T a, T b, T c)
{
    return (a + b + c) / 3;
}
template<typename T>
void average(vector<T> vec)
{
    T vec_temp = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        vec_temp += vec[i];
    }
    vec_temp /= vec.size();
    
    
    cout << "\nvec - "<< vec_temp;
}

template<typename T>
void print(const vector<T> &vec)
{
    for (auto i = vec.begin(); i != vec.end(); ++i) 
        cout << *i << " ";
}


template<typename T>
T average(list<T> lst)
{
    T tmp = 0;

    for (auto i = lst.cbegin(); i != lst.cend(); ++i)
    {
        tmp += *i;
    }

    tmp /= lst.size();
    return tmp;
}

int main()
{
    cout << average(10,20,30);
    vector<int> vec =  {10,10,10,10,15,134,513,514};
    vector<string> s_vec = {"A", "L", "E", "X"};
    average(vec);

    cout << endl;
    list<int> lst = {10,10,10};
    cout << average(lst);

    cout << endl;
    print(vec);
    cout << endl;
    print(s_vec);
    cout << endl;
   

    pr::pair<string, int> p;
    vector<pr::pair<string,int>> p_vec;
    p.first = "Hello,World!";
    p.second = 15;
    p_vec.push_back(p); 

    for (auto i : p_vec)
    {
        i.print();
    }


    return 0;
}
