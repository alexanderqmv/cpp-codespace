#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>

#include <unordered_set>
#include <string>
#include <vector>
#include <array>
#include <stack>
#include <string_view>
using namespace std;



void getmax(const vector<int>& vec)
{
	
	vector<int> max(vec.size());
	int itr = 0;
	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[i] > 100)
		{
			max[itr] = vec[i];
			++itr;
		}
		else
		{
			max.resize(vec.size() - i - 1);
		}
	}
	for (int i = 0; i < max.size(); ++i)
	{
		cout << max[i] << " | ";
	}
}


void iseven(const vector<int>& arr)
{
	vector<int> temp(arr.size());
	int itr = 0;

	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] % 2 == 0)
		{
			temp[itr] = arr[i];
			++itr;
			
		}
		else if (arr[i] % 2 != 0)
		{
			temp.resize(temp.size() - 1);
		}
		 
	}

	cout << "\nelements > 100 and even : \n" << endl;
	for (int i = 0; i < temp.size(); ++i)
	{
		cout << temp[i] << " | ";
	}

	cout << endl << endl;
	getmax(temp);

}

 


int main()
{ 
	 
	vector<int> d{ 2, 28, 8, 24, 12, 25, 85, 91, 128, 412, 5931, 492, 123142, 123124, 44554,12345,59136, 194, 901, 290, 111, 222, 333, 444, 555 };
	for (int i = 0; i < d.size(); ++i)
	{
		cout << d[i] << " ";
	}
	iseven(d);

 
	cout << "\n\nchoose elements to erase: ";
	int idx;
	cin >> idx;
	d.erase(d.begin() + idx);
	for (int i = 0; i < d.size(); ++i)
	{
		cout << d[i] << " ";
	}
	 
	return 0;
}
