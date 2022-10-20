#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int x = 5678;

	cout << "BEFORE X == " << x << endl;
	

	cout << x % 10;
	x /= 10;

	cout << x % 10;
	x /= 10;
	cout << x % 10;
	x /= 10;
	cout << x % 10;
	x /= 10;

	cout << endl << endl;


}
