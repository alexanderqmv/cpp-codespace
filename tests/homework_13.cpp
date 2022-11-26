#include <cassert>
#include <iostream>

using namespace std;



int main()
{
    double average = 0;
    double numbers = 0;
    double sum = 0;

    double size0 = 0;
    cout << "ENTER SIZE :: ";
    cin >> size0;
    for (int i = 0; i < size0; ++i)  
    {
        cout << "[" << i << "] - > ";
        cin >> numbers;
        sum+=numbers;
    }

    cout << "\nSum = " << (double)sum << endl;
    cout << "\nAverage = " << (double)(average=(sum/size0));

    return 0;
}
