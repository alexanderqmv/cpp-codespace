#include <iostream>

using namespace std;

double KilogramsInPounds(int kilograms)
{

    return (kilograms *  2.20462);
}

double PoundsInKilograms(int pounds)
{

    return (pounds * 0.453592);

}

int main()
{   
    int pounds;
    cout << "[CONVERT] Pounds in kilograms > ";
    cin >> pounds;

    cout << PoundsInKilograms(pounds);
    cout << endl;

    int kilograms; 
    cout << "[CONVERT] Kilograms in pounds > "; 
    cin >> kilograms;

    cout << KilogramsInPounds(kilograms);

    cout << endl;
    return 0;
}
