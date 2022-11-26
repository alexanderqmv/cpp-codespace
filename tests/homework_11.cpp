 
#include <iostream>

using namespace std;

int main()
{
    int num = 0, t = 0;

    cin >> num;

    while (num)
    {
        num = num / 2;
        t = num % 2;
     cout << t;
    }

   

    return 0;
}
