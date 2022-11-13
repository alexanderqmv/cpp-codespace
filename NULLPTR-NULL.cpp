#include <iostream>
#include <iterator>
#include <array>
#include <vector>
#include <fstream>


using namespace std;



int main(int argc, char const *argv[])
{
	int *pa = new int(10);
	
	delete pa;

	pa = nullptr; // NULL
	
	
 	



	if (pa != nullptr) // NULL exp.1 
	{
		cout << pa << endl;
	}

	delete pa;
	return 0;
}
