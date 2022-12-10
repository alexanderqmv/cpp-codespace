#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, reverse = 0, rem;
    cout << "Enter number: ";
    cin >> n;   

    while (n != 0 && n != INT_MAX && n != INT_MIN)
    {
        rem = n % Q10; 
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    cout << "Reversed number: " << reverse << endl;

    return 0;
}
