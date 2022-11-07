#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int>vec = {23,53,61,98,120};	

	vector<int>::iterator itr;

	itr = vec.begin();

	// advance(itr,3);

	// cout << *itr;
	vec.insert(itr,999);	

	/*сдвиг итератора вправо!
	itr+=2;
	itr-=1;
	*/

 	/* в данном случае мы выводим все элементы и так как мы написали что
		`i <= vec.end()` в таком случаем выводится еще 0 и 23.
		тоесть итератор тыкает в ту точку откуда и начинал и там же заканчивает.
 	*/

 	/*
	for (vector<int>::iterator i = vec.begin(); i <= vec.end();i++)
	{
		cout << *i << endl;
	}
	*/

	/*
	for (vector<int>::iterator i = vec.begin(); i != vec.end();i++)
	{
		cout << *i << endl;
	}
	*/
	
	/* constant iterator*/
	/*
	for (vector<int>::const_iterator i = vec.cbegin(); i != vec.cend();i++)
	{
		cout << *i << endl;	

	}*/
	
	for (vector<int>::reverse_iterator i = vec.rbegin(); i != vec.rend();i++)
	{
		cout << *i << endl;
	}
	
	/*cout << *itr << endl;*/

	return 0;
}
