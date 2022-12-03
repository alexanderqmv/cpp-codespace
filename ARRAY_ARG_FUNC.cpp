#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <iterator>
#include <unistd.h>
#include <assert.h>
// linear search, template, sort, size++ array | rewrite
using namespace std;
enum { SIZE_T = 5 };

template<typename T>
void print(array<T, SIZE_T> arr)
{
    for (auto i = arr.cbegin(); i != arr.cend(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    
}

template<typename T>
void sort_t(array<T,SIZE_T> arr)
{
    for (T i = 0; i < SIZE_T; ++i )
    {
        for (T j = i + 1; j < SIZE_T; ++j)
        {
            if (arr[i] > arr[j])
            {   
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    for (auto i = arr.cbegin(); i != arr.cend(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    
}

int main()
{
     
    array<int, SIZE_T> array_1{5,4,3,2,1};
    array<float, SIZE_T> array_2{5.5,4.5,3.3,2.2,1.1};

    print(array_1);

    sort_t(array_1);
    cout << endl;
    print(array_2);
    cout << endl;
    sort_t(array_2);


     
    


    return 0;

}
