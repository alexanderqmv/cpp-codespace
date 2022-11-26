#include <iostream>

using namespace std;

int main()
{

    double pounds = 0;
    double kilograms = 0;

    cout << "\nPounds in Kilograms: \n";
    cout << "Get your input :: ";

    cin >> pounds;
    kilograms = pounds * 0.453592;
    cout << (double)kilograms;

    double pounds_t = 0;
    double kilograms_t = 0;

    cout << "\nKilograms in Pounds:\n";
    cout << "\nGet your input :: ";
    cin >> kilograms_t;

    pounds = kilograms_t * 2.20462;
    cout << (double)pounds;
    

    return 0;
}
