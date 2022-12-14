#include <iostream>

using namespace std;

inline namespace math
{
    int pow(int n, int p)
    {
        int temp = n;
        for (int i = 1; i < p; ++i)
        {
            temp*=n;
        }
        return temp;
    }
}

inline namespace math
{
    template<typename T>
    void sort(T arr[], size_t size)
    {
        T temp;

        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

inline namespace math
{
    template<typename T>
    void print(T  arr[], size_t  size)
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << " ";
        }
    }
}

inline namespace math
{
    template<typename T>
    void search(T arr[], size_t size , T key)
    {
        for (int i = 0; i < size; ++i)
        {
            if (key == arr[i])
            {
                cout << "\nkey : " << key << "found in [" << i << "]\n";
            }
        }
    }
}

inline namespace math
{

    int int_binsearch(int arr[], int l, int r, int x)
    {
        if (r >= l)
        {
            int mid  = l +  (r - l) / 2;
            std::cout << std::endl << "Mid = " << mid;

            if (arr[mid] == x)
            {
                return mid;
            }

            if (arr[mid] > x)
            {
                return int_binsearch(arr,l, mid - 1,x);
            }

            return int_binsearch(arr,mid + 1, r, x);
        }
        return -1;
    }
}


int main(int argc, const char *argv[])
{
    cout << math::pow(10,2);
    int arr[5] = {1004, 1001, 501, 10, 40981};
    std::cout << std::endl;
    math::sort(arr,5);
    math::print(arr,5);
    math::search(arr,5,4098);
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << std::endl << n << std::endl;
    std::cout << std::endl;
    std:cout << math::int_binsearch(arr,0, n - 1, 4098);


    return 0;
}
