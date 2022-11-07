#include <iostream>
#include <vector>

#include <cmath>
using namespace std;
 
string function() 
{
	return "Successfully\n\n";
}

int main(int argc, char const *argv[])
{
	vector<int> vec;
	vec.reserve(100);
	vec.push_back(11);
	cout << vec[0];
	vec.push_back(22);
	vec.emplace_back(33);
	cout << "\t" << vec[1] << "\t";
	vec.push_back(1001);

	if (vec.size())
	
	cout << vec[2];
	cout << endl << vec.at(1);

	cout << endl << vec.size() << endl;
 	
	for (int i : vec)
	{
		cout << i;
 	}

 	cout << endl;

 	cout << function();

 
 	try 
 	{
 		cout << vec.at(10) << endl;
 	}
 	catch (const out_of_range& ex)
 	{
 		cout << ex.what() << endl << endl;
 	}

 	


 	//vec.clear();

 	//cout << endl << vec.empty();

 	vec.pop_back();
 	cout << endl << vec.size();

 	cout << vec.capacity();


	return 0;
 	}
