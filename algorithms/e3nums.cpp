#include <iostream>

using namespace std;

int main()
{
    int a{0};
    int b{0};
    int c{0};

    cout << "enter 3 nums: " << endl;
    

    while (cin >> a >> b >> c)
    {
        if (a > b and a > c and b > c)
        {
            cout << c << " " << b << " " << a << endl;
        }else if (b > a and b > c and c > a)
        {
            cout << a << " " << c << " " << b << endl;
        }else if (c > a and c > b and b > a)
        {
            cout << a << " " << b << " " << c << endl;
        }else if (b > a and b > c and c < a)
        {
            cout << c << " " << a << " " << b << endl;
        }
    }
    
    return 0;   
}
