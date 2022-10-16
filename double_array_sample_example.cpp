#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	const int ROW = 2;
	const int COL = 4;
					//  0        1
	int arr[ROW][COL]{{2,4}, {5,3,9,7}};
					// 0,1    0 1 2 3
	std::cout << arr[1][3] << std::endl; 

	std::cout << sizeof(arr);

	return 0;
}
