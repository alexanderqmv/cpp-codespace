#include <iostream>
#include <iterator>
#include <array>
#include <vector>
#include <fstream>

 
using namespace std;
/*
enum {
	sizen = 5
};
*/
int main()
{	
	int N = 5;
	 

	 
	int* arr = new int[N];	

	for (int i = 0; i < N; ++i)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < N; i++){
		cout << arr[i] << " -\t";
		cout << arr + i << endl;
	}

	cout << endl; 

	 
	// or

	/*

	for (int i = 0; i < sizen; i++){
		cout << arr + int << " ";
	}


	*/

	cout << endl;


	delete[] arr;



	return 0;
}
