#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template<typename T, typename U>
struct simple_struct
{
	T* first;
	U* second;

};

int main(int argc, char const *argv[])
{
	simple_struct<int,double> obj = {new int(10), new double(67.89)};
	cout << *obj.first << " " << *obj.second << endl;

	simple_struct<string>,size_t> del = {new string("Hello,World"), new size_t(2007)};
	cout << *del.first << " " << *del.second << endl;

	delete obj.first, obj.second;

	
	return 0;
}
