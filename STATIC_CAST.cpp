#include <iostream>
#include <array>
#include <cstdio>

using namespace std;

void Foo(int *a)
{

	//++(*a);

	(*a) = 50103;
	
	
}

int main(int argc, char const *argv[])
{
	int a = 10;
	Foo(&a);
	//////////////////////////////////
	///*static_cast | dynamic_cast*///
	//////////////////////////////////
	void* ptr = &a;

	int IntPtr = *static_cast<int*>(ptr);

	cout << endl << IntPtr << endl;

	

	cout << a;
	
	
	
	return 0;
}
