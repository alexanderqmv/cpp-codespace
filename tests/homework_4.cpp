#include <iostream>

using namespace std;

int main() 
{   
    const short size = 10;
    int array_t[size]{1,2,3,4,5,6,7,8,9,10};

    cout << "Elements: " << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << array_t[ i ] << " ";

    }

    cout << endl;

    int min = array_t[0];
    int max = array_t[0];
    for (int i = 1  ; i < size; ++i)
    {

        if (min > array_t[i])
        {
            min = array_t[i];
            
        }
        
    }
    cout << "[ < "<< min << " > ::   min number in array ] ";


    for (int i = 1; i < size; ++i)
    {

        if (max < array_t[ i ])
        {
            max = array_t[ i ];
        }
    }
    cout << endl;
    cout << "[ < "<< max << " > ::  max number in array ]";
    
    cout << endl;
    return 0;
}
