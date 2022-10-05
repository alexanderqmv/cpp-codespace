#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ostream>

int sFunction() {

	int32_t *pointer;
	int32_t *pointer_2;
	 

	/*

	std::vector<int> implef;
	implef.push_back(1);
	implef.push_back(2);
	implef.emplace_back(3);
	
							*/
	 
	 

	pointer = new int(150);
	pointer_2 = new int(300);

	int &x = *pointer;

	x = 100;

	std::cout << x << " | x" << std::endl;
	std::cout << &x << " | &x" << std::endl;

	std::cout << pointer << " | pointer";
	std::cout << sizeof(pointer) << " | sizeof(pointer)";
	std::cout << std::endl << *pointer << " | *pointer";

	std::cout <<  std::endl<<cos(*pointer) << " | cos(*pointer)";

	std::cout << std::endl << cos(*pointer + *pointer_2 + x) - *pointer_2  << " | cos(*pointer + *pointer_2 + x) ";

	delete pointer, x,pointer_2;
	

	return 0;
}

int vFunction(int vIp) {

	std::vector<unsigned int> vI;
	vI.push_back(vIp);

	for (int n : vI) {
		std::cout << n << std::endl;
	}
	return 0;
}

int qFunction() {

	float x=0,y;
	
	std::cin >> y;
	
	x = y >=10 ? round(y): round(-y); // if f.e: 9.5 -> rounded to 10, the result will be negative(-), because of our input and if/else statement
	
	std::cout << x << " | std::cin >> y |  ";	

	return x;
}


int main(int argc, char const *argv[])
{
	 
	
	qFunction();
	vFunction(30);
	sFunction();
		
	return 0;
}
