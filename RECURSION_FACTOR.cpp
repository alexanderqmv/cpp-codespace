#include <iostream>

using namespace std;

size_t factor(size_t n)
{
    if(n == 0)
    {
        return 0;
    }
    
    if (n == 1)
    {
        return 1;
    }
    
    if(n < 0)
    {
        return 0;
    }
    
    return n * factor(n - 1);
}

int main () 
{
    cout << factor(22);
    
    return 0;
}
