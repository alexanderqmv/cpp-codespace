#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	// malloc(1000) bytes -> return nullptr
	// new -> throw std::bad::alloc
	// new (std::std::nothrow) int -> nullptr 

	int N;
	printf("Enter size of array to create: ");
	scanf("%d", &N);

	char A[N];

	printf("Array Created Successfully\n");
	


	return 0;
}
