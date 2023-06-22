#include <iostream>

using namespace std;



int main()
{
    int i,j;
    const int N = 10;
    int a[N] = {12, 5, 9 ,4 , 11, 21, 3, 14,18, 20};
    int buff = 0;
    for (i = 1; i < N; ++i)
    {
        buff = a[i]; 

        for (j = i - 1; j >= 0 and a[j] > buff; j--)
        
            a[j + 1] = a[j];
            a[j + 1] = buff;     
    }

 
    for (int i = 0; i < N; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
