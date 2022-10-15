#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

int main(int argc, char const *argv[])
{
	for (char letter = 'A'; letter <= 'Z'; letter++) {
		std::cout << letter << " _ " << (int) letter << std::endl;
	}
	

	const char c[] = "Mercedes";

	std::vector<std::string> i = {
		"Nissan", "BMW", "Toyota","Chevrolet"
	};

	i.emplace_back("Tesla");

	for (std::string x : i) {

		std::cout << x << "\t";
	}

	std::cout << std::endl;

	std::cout << sizeof(c) << "\n" << c << std::endl;


	return 0;
}
