#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int findOnce(const vector<int>& vec)
{
	unordered_map<int, int> count;
	for (int i = 0; i < vec.size(); ++i)
	{
		count[vec[i]]++;
	}

	
	for (int i = 0; i < vec.size(); ++i)
	{
		if (count[vec[i]] == 1)
		{
			return vec[i];
		}
	}
	return -1;
}


int main(int argc, const char* argv[])
{


	vector<int> vec{ 1,1,1,2,2,2,3,3,3,4 };
	int res = findOnce(vec);
	cout << res;

	return 0;
}
