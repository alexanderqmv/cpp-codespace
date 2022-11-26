#include <iostream>

using namespace std;



int main()
{
    int a[6];
    int x = 435391;
    a[0] = x / 100000; // 4
    a[1] = (x / 10000) % 10; // 3
    a[2] = ((x / 1000) % 100) % 10 ; // 5
    a[3] = ((x / 100) % 1000) % 10; // 3
    a[4] = ((x / 10)% 10000) % 10; // 9
    a[5] = ((((x % 100000) % 10000) % 1000) % 100) % 10; // 1
    

    int sum1_t = (a[0] + a[1] + a[2]);    
    int sum2_t = (a[3] + a[4] + a[5]);
    if (sum1_t > sum2_t)
    {

        cout << "number is `happy`";
    } 
    else 
    {
        cout << "number is not `happy`";
    }
    return 0;

}
