#include <iostream>

using namespace std;

void fill(int *arr, const int size)
{

    srand(time(NULL));
    // size: 50
    for (int i = 0; i < size; i++)
    {

        arr[i] = 1 + rand() % 100;


        if (arr[i] % 2 != 0)
        {
            
            cout << arr[ i ] << " ";
            
        }
         
        
        
    }
    
}

 

int main()
{
    const int SIZE = 50;
    int *arr = new int[SIZE];

    fill(arr,SIZE);
    

    return 0;
}
