#include <iostream>
#include <string>
#include <cmath>
#include <sha2>

class Hex {
public:
	int getHex();
protected:
	std::string input;

	std::string hex;
};

bool ifPass() {
	unsigned int p;

	std::cout << "your sum of marks in math: "; std::cin >> p;
	if (p >= 50) {
		std::cout << "you passed!";
		return true;
	}else {

		return false;
	}

	return p;
}

int getMarks()
{
	double marks;

	std::cout << "enter your marks sum in math: "; std::cin >> marks;

	std::string result = (marks >= 50 and marks <= 100) ? "Good Job!" : "Sorry!";

	std::cout << result;

	return marks;
}


int chargable(unsigned int a, unsigned int b) {

 
 	unsigned int i;

	for (i = 0; i < (a+b+(5*10)-10); i++) {
		std::cout << i << "\n";
	}

	double j = sqrt(a+b);
	unsigned y = round(j);

	std::cout << i << std::endl;
	std::cout << y << std::endl;

	 
	return i;

}

int Hex::getHex() {

	std::cout << "\n> your input: ";
	std::cin >> input;

	std::string hex = sha512(input);

	std::cout << hex;

	return 0;
}


int main(int argc, char const *argv[])
{
	
	Hex h;

	chargable(10,50);
	getMarks();
	ifPass();
	h.getHex();

	return 0;
}
