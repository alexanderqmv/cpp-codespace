#include <iostream>
using namespace std;

int fact(int n);

int main () {
	
	cout << fact(12);
	
	
}

int fact(int n) 
{
	int res;
	
	if (n == 1) return 1;
	res = fact(n-1) * n;
	
	return res;
}
