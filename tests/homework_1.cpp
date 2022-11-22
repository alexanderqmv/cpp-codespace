#include <iostream>
#include <ctime>
using namespace std;



void fillArr(int* arr, const int &size)
{
    srand(time(NULL));
    const int lowerLimit = 7;
    const int upperLimit = 14;
     
    for (int i = 0; i < size; ++i)
    {

        arr[i] = lowerLimit + rand() % (upperLimit - lowerLimit + 1);
        cout << arr[i] << " ";

    }

    for (int i = 0; i < size;++i)
    {
        if(arr[i] >= 10)
        {
            arr[i] -= 10;

        }
               
        cout << endl << arr[ i ] << " "; 
    }
    

    
    
}

int main() 
{
    const int size = 10;
    int arr[size];

    fillArr(arr,size);
    return 0;

}
