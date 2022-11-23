#include <iostream>

using namespace std;

void getIt(int x[], const int size)
{

    cout << "Elements which are > 5:   ";
    for (int i = 0; i < size;++i)
    {
        if (x[i] > 5)
        {
            cout << x[i] << " ";
        }
    }
    cout << endl;

    int base;
    cout << "enter number: ";
    cin >> base;

    for (int i = 0; i < size; ++i)
    {

        if (base > x[ i ])
        {
            cout << x[ i ] << " ";
        }
    }
}

int main()
{   
    const int size = 17;
    int arr[size] = {1, 1, 2, 4, 5, 9, 14, 22, 37, 54, 87, 90, 111, 243, 345,2000,20000};

    getIt(arr,size);

    return 0;
}
