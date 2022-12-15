#include <iostream>

using namespace std;



void print_arr(int arr[], int &size)
{

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] <<  " "; 
        ++size; // 10
    }
}

int main()
{
    int arr[5]{50,70,90,110,130};

    int size = 5;
    print_arr(arr,size);
    cout << size;
    return 0;
}
