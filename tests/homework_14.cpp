#include <iostream>

using namespace std;

typedef unsigned long long int ulong_t;

ulong_t factor(int n)
{   
    int accumulate = 1;

    if (n <= 1)
    {

        return 1;
    }else 
    {
        while(n)
        {
           accumulate = accumulate * n;
           --n;
        }
        return accumulate;
    }

    
}

int main()
{
   
    cout << (ulong_t)factor(10);
    return 0;
}
