#include "config.h"

void datas::method() {
	x = 2022;
	y = 2007;
	xy = x - y;
	cout << endl << xy << endl;
}

void func() {
	int i = 1;
	printf("%d",i++);
}

void function() {
	static int i = 1;
	printf("%d", i++);
}

int main(void)
{
	datas d;

	function(); // :1
	function(); // :2
	function(); // :3

	cout << endl;

	func(); // :1
	func(); // :1
	func(); // :1

	cout << endl;
	

	d.method();

	cout << light;
	cout << endl << volume;
}
