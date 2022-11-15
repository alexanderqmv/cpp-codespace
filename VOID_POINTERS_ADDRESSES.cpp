#include <iostream>
#include <iterator>

using namespace std;

void Foo(int* x, int* y, int* z)
{
	*x = 555;
	*y = 333;
	++*z;

	cout << endl << "SUM - "<< *x + *y << endl;

	
}

int main () 
{

	int x = 0, y = 0, z = 1;

	cout << x << " " << y << " " << z << endl;

	Foo(&x,&y,&z);

	cout << x << " " << y << " " << z << endl;
	return 0;
}
