#include <iostream>
#include <vector>

using namespace std;

int main () {

    cout << "******* Temp Conversion ***********";
    cout << "F = Farenheit\n";
    cout << "C = Celsius\n";

    double temp;
    char unit;

    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter temp in Celsius";
        cin >> temp;

        temp = (1.8 * temp) + 32;
        cout << "temperature: " << temp;

    }
    else if (unit == 'C' || unit == 'c') {
        cout << "Enter temp in Farenheit";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "temperature: " << temp;
    }
    
    
    return 0;
}
