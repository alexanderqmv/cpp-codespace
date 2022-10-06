#include <iostream>
#include <string>
#include <cmath>

void pointer(void) {

	unsigned int* a;
	a = new unsigned int[11];

	std::cout << std::endl << "New Memory Block Forged :: " << a;

	for (int i = 0; i < 11; i++) {
		std::cout << std::endl << a[i] << " | "; 
	}

	/*
	
		the output will :: 0 |
		because we used unitilialised iteration

		define y[0-10] OK

	*/

	/* then we should delete this pointers*/

	delete[] a;
}


void pointers(void) {

	uint* x;
	x = new uint(10);

	uint* y;
	y = new uint[5];

	y[0] = 5;
	y[1] = 10;
	y[2] = 15;
	y[3] = 20;
	y[5] = 25;
	
	for (int i = 0; i < 5; i++) {

		std::cout << std::endl << i << " :: " << y[i];
		std::cout << " | size :: " << sizeof(y) << std::endl;
		
		if(y[i] == 0) {
			std::cout << "______________________\n";
		}

	}

	for (int i = 0; i < 5; i++) {
		std::cout << y[i] << "\t";
	}

	std::cout << std::endl << x;
	std::cout << std::endl << y;

	delete[] x,y;

	std::cout << std::endl << "Successfully Deleted :: " << x ;
	std::cout << std::endl << "Successfully Deleted :: " << y << std::endl;




}

int main(int argc, char const *argv[])
{
	pointers(); 
	pointer();
	return 0;
}
