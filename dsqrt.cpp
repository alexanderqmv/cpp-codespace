#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int SomeScript() {

	int d,a,b,c,x1,x2;

	

	cout << "enter a: "; cin >>a;
	cout << "enter b: "; cin >>b;
	cout << "enter c: "; cin >>c;

	d = (b * b - 4 * a * c);

		if (d < 0) {

			cout << "no roots...";
		}

			else if (d > 0) {
				x1 = (-1 * b + sqrt(d) / 4 * a);

				x2 = (-1 * b - sqrt(d) / 4 * a);
			}
			cout << "x1 - " << x1 << endl;
			cout << "x2 - " << x2 << endl;


		return d;


} 

int main () {

	SomeScript();
}
