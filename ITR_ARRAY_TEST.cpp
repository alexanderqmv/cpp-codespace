#include <iostream>
#include <cstdio>
#include <array>
#include <iterator>

#define N 10
#define K 5
using namespace std;


int arrFunc_2()
{
					//  0 1 2 3 4
	array<int,K> arr = {5,4,3,2,1};

	cout << endl;
	for (int i = 0; i < arr.size(); ++i)
	{

		cout << arr[i] << " ";
	}

	cout << endl;


	// return '1' if containter is empty , '0' - if it's false(not empty)
	cout << arr.empty();

	cout << endl;

	// last element output
	cout << arr.back();

	
	// max size 
	cout << endl << arr.max_size();

	array<int, K>::iterator itr;


	//itr = arr.begin();

	cout << endl;
	for (auto i = arr.begin(); i != arr.end(); i++)
	{
		cout << *i;
		 
	}


	cout << endl;
	for (auto i = arr.rbegin(); i != arr.rend(); i++)
	{
		cout << *i;
		 
	}


	return 0;
}

int arrFunc()
{
	int array[10] = {2,2,3,3,4,4,5,5,7,7};

	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;


	for (int i : array)
	{
		cout << i << " ";
	}

	return 0;
}

int main(int argc, char const *argv[])
{

	arrFunc();

	arrFunc_2();

	return 0;
}
