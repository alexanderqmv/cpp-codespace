#include <iostream>

using namespace std;

enum
{

    N = 30
};

int main()
{
    size_t arr[N]; // main array
    size_t rewrite_t[N]; // array for cell
    int key = 0; // key
    int k = 0; // k for cell

    cout << endl;
    cout << "Array: \n";
    for (int i = 0; i < N; ++i)
    {
        arr[i] = 1 + rand() % 30;
        
        cout << arr[i] << " ";
        if (i == 14) // halve the numbers
        {
            cout << endl;
        }
    }

    cout << endl;

    cout << "Enter key: ";
    cin >> key; 



    for (int i = 0; i < N; ++i)
    {
        if(arr[i] == key) // if our key mathes to numbers in array
        {
            rewrite_t[k++] = i; // we write down the cell number
        }
    }   

    cout << "\nk = " << k << endl;
    for (int i = 0; i < k; ++i)
    cout << "Found key " << key << " in " << rewrite_t[i] << endl;
    cout << "\nk = " << k << endl;  

    return 0;
}
