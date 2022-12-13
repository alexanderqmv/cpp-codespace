#include <iostream>

using namespace std;

int pow_t(int n, int p)
{
    return p ? n * pow_t(n, p - 1) : 1;
}

int pow_t_beta(int n, int p)
{
    int temp = n;
    for (int i = 1; i < p; ++i)
    {
        temp*=n;
    }
    
    return temp;
}

int main()
{
    cout << pow_t(2,19) << endl;
    cout << pow_t_beta(2,19) << endl;
    
    return 0;
}

