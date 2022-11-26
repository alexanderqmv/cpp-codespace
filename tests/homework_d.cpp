#include <iostream>

using namespace std;

double PoundsInKilograms(int pounds)
{

    return pounds * 0.453592;

}

int main()
{   
    int pounds;
    cin >> pounds;

    cout << PoundsInKilograms(pounds);

    return 0;
}
