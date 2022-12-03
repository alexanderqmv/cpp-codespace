#include <iostream>

using namespace std;

 

int main()
{
    int num = 4321;
    cout << num << " - ";
    cout << num % 1000 % 100 % 10;
    cout << num % 100 / 10;
    cout << num / 100 % 10;
    cout << num / 1000;
    return 0;
}
