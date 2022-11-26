#include <iostream>

using namespace std;



int main()
{ 

    setlocale(LC_ALL, "ru");
    static unsigned short a;
    static unsigned short h; 

    static unsigned short  S;

    
    cout << "Введите длину основания треугольника: ";
    cin >> a;

    cout << "\nВаш ввод: " << a << endl;

    cout << "\nВведите высоту треугольника: ";
    cin >> h;
    cout << "\nВаш ввод: " << h << endl;
    cout << (S=0.5*a*h);
    return 0;

    // площадь треугольника с помощью аргументов функции

}
