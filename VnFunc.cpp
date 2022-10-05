#include <iostream>
#include <string>
#include <cmath>
#include <vector>

 

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
	
	std::cout << x << "  ";	

	return x;
}


int main(int argc, char const *argv[])
{
	
	
	qFunction();
	vFunction(30);
	return 0;
}
