#include <iostream>
#include <cmath>
using namespace std;

int main()
{   

    double R = 0;
    double S = 0;

    const double pi = 3.1415926535;

    cout << "get input of Radius:: ";
    cin >> R;

    S = pi * pow(R,2);
    
    cout << "S == " << (S) << endl;


    return 0;
}
