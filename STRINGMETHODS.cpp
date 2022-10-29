#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	
	string str("The quick brown fox jumps over the lazy dog");
	cout << str;

	str.replace(10,5, "red");
	cout <<endl << str;

	str.replace(str.begin(), str.begin() + 3, 1, 'A');
	cout << endl <<str << endl;

	string a = "123456789abcdefjhijklmnopqrstuvwxyz";

	string sub  = a.substr(9);

	string sub1 = a.substr(a.size()-3, 50);
	cout << endl <<sub1;
	cout << sub;

	cout << endl;



	return 0;
}
