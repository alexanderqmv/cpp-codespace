#include <iostream>
#define N 5

using namespace std;

int main(int argc, char const *argv[])
{
	int temp, pass = 0, i, j;

	
	int a[N] = {5,53,14,102,3004};


	cout << "INPUT ELEMENTS:  ";
	for (i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}


	cout << endl;

	// Sorting Algorithm: Swap between two numbers(big->small)
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		pass++;
	}

	cout << endl;

	cout << "SORTED ELEMENTS: ";
	for (i = 0; i < 5;i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}
