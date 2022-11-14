#include <iostream>
#include <climits>
#include <array>

#define N 5
 
using namespace std;

int main () 
{

	array<uint, N> arr = {251,543,787, 909,125};

	////////////////////////////
	//  Array Elements Print  //
	////////////////////////////
	for (uint i = 0; i < N; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	
	// OR

	/*
	for (uint i : arr)
	{
		cout << i << " ";
	}
	
	*/


	//////////////////////////////////
	//       SORTING ALGORITHM      //
	//////////////////////////////////
	int temp, pass = 0;

	for (uint i = 0; i < N; ++i)
	{
		for (uint j = i + 1; j < N; ++j)
		if (arr[i] > arr[j])
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		pass++;
		
	}

	for (uint i : arr)
	{
		cout << i << " ";
	}
	
	return 0;
}
