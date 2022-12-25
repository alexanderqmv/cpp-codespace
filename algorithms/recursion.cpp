#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


void rec(int n)
{
	cout << n << "\n";

	if (n == 1)
	{
		return;
	}

	rec(n - 1);

}

void printnum(int begin)
{
	cout << begin;
	if (begin < 9)         // The base case is when begin is greater than 9
	{                           //  for it will not recurse after the if-statement
		printnum(begin + 1);
	}
	else
	{
		return;
	}
	cout << begin << " ";         // Outputs the second begin, after the program has
	//  gone through and output
}

int foo(int n)
{

	if (n < 0)
	{
		return 0;
	}
	return n + foo(n - 2); // if n == 10 -> 30 | (1 itr) ::  10 + (10 - 2) = 18
	// (2 itr) :: 18 + (8 - 2) = 24 |  (3 itr) 24 + (6 - 2) = 28 | 28 + (4 - 2) = 30
}
 

int main()
{
	rec(30);
	cout << endl << endl;

	printnum(100);

	cout << endl;

	
	cout << foo(10);

 
	
	return 0;
}
