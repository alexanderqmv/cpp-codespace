#include <iostream>
#include <cmath>
using namespace std;
 

int main()
{
    unsigned char var = 153; // 10011001
    unsigned char not_v = ~var;
    
    cout << (int)not_v;

    cout << endl;
    unsigned char flags = 13; // 00001000 | 13 - 000001101
    unsigned char mask = 9; //  00001001

    unsigned char res = flags & mask;
    cout << (int)res;

    cout << endl;

    if ((flags & mask) == mask) { cout << "included\n";}
    else { cout << "not included\n";}

    return 0;
}
