#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

string reversestring(string str)
{

	/*reverse(str.begin(), str.end());

	return str;*/

	string result;

	for (int i = str.length() - 1; i >= 0; --i)
	{
		result += str[i];
	}

	return result;
}


void isfibonacci(uint64_t sz)
{
	uint64_t temp = 0, t1 = 0, t2 = 1;

	for (int i = 1; i <= sz; ++i)
	{
		if (i == 1)
		{
			cout << t1 << ", ";
			continue;
		}
		
		if (i == 2)
		{
			cout << t2 << ", ";
			continue;
		}

		temp = t1 + t2;
		t1 = t2;
		t2 = temp;

		cout << temp << ", ";
	}
}

void selectionsort(int arr[], int elem)
{

	for (int i = 0; i < elem - 1; ++i)
	{
		int min_idx = i;
		for (int j = i + 1; j < elem; ++j)
		{
			if (arr[j] > arr[min_idx])
			{
				min_idx = j;
			}
		}
		swap(arr[min_idx], arr[i]);
	}

	for (int i = elem - 1; i >= 0; --i)
	{
		cout << arr[i] << " ";
	}
}

int search(int arr[], int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == key)
		{	
			
			return i;
		}
	}
	return -1;
}



bool ispalindrome(string str)
{
	for (int i = 0; i < str.length() / 2; ++i)
	{
		if (str[i] != str[str.length() - i - 1])
		{
			return 0;
		}
	}
	return 1;
}


int findmaxelement(vector<int> vec)
{

	if (vec.size() == null)
	{
		cerr << "null";
		return -1;
	}

	int max = vec[0];
	for (int i = 0; i < vec.size(); ++i)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}
	}
	return max;
}


 

int main(int argc, const char* argv[])
{
	string my_str = "i love c++ programming!";
	cout << "before: " << my_str << endl;
 	cout << "after: "  << reversestring(my_str);
	cout << "\npalindrome: " << ispalindrome("hocbvwgpaapgwvbcoh") << endl;
	isfibonacci(10);

	cout << endl;
	int arr[10] = { 20,40,10,30,70, 50, 100, 90, 80, 60 };
	selectionsort(arr, 10);

	cout << endl << "found key in [" << search(arr, 10, 100) << "]\n";

	vector<int> vec = { 12,14,15,20,3,0,400 };
	cout << "max element: " << findmaxelement(vec);
	
 
	return 0;
}
