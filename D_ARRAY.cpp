#include <iostream>

using namespace std;

void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {

        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {

        cout << arr[i] << "\t";
    }
    cout << endl;
}

void push_back(int *&arr, int &size, const int value)
{
    int *newArray = new int[ size+1 ];
    
    for(int i = 0; i < size; ++i)
    {

        newArray[i] = arr[i];   
    }

    newArray[size] = value;
    
    ++size;
    
    delete[] arr;
    
    arr =  newArray;
}   

void pop_back(int *&arr, int &size)
{
    --size;
    int *newArray = new int[size];
    for (int i = 0; i < size; ++i)
    {
        newArray[i] = arr[i];
    }

    delete arr;

    arr = newArray;
}

int main()
{
     

    cout << endl;
    int size = 5;
    int *ar = new int[size];

    FillArray(ar,size);

    ShowArray(ar,size);

    push_back(ar,size,111);

    push_back(ar,size,222);

    ShowArray(ar,size);

    pop_back(ar,size);

    ShowArray(ar,size);
    delete[] ar;
    
    ar = nullptr;
    return 0;
}
