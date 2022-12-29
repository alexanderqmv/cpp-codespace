/* Worket with project: @ynwqmv */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
/* Math structure which contains 4 function :
find_vector_min_elem, find_vector_max_elem,
find_vector_average,  find_vector_median*/
struct Math
{
	// Finds the minimal element in vector
	int find_vector_min_elem(vector<int> vec);
	// Finds the maximal element in vector
	int find_vector_max_elem(vector<int> vec);
	// Finds the vector's  average
	int find_vector_average(vector<int> vec);
	// Finds the vector's  median
	int find_vector_median(vector<int> vec);
};


int Math::find_vector_min_elem(vector<int> vec)
{
	/* [!] If vector's size equals to NULL, functions returns -1*/
	if (vec.size() == 0) return -1;

	// Local var temp, which points to first element in vector::vec[]
	int tmp = vec[0];
	
	// [LOOP] If tmp > than vec[0], tmp == vec[i]; 
	for (int i = 0; i < vec.size(); ++i)
	{
		if (tmp > vec[i])
		{
			tmp = vec[i];
		}
	}
	// Function returns tmp, which contains our min element of vector 
	return tmp;
}

int Math::find_vector_max_elem(vector<int> vec)
{
	if (vec.size() == 0) return -1;

	int tmp = vec[0];
	for (int i = 0; i < vec.size(); ++i)
	{
		if (tmp < vec[i])
		{
			tmp = vec[i];
		}
	}
}


int Math::find_vector_average(vector<int> vec)
{
	// If vector size equals to NULL, function returns -1
	if (vec.size() == 0) return -1;

	/* Local Variables */
	int tmp = 0;
	int average = 0;
	/*                 */
	// Loop, where we sum all vector elements, and put there in tmp var
	for (int i = 0; i < vec.size(); ++i)
	{
		tmp += vec[i];
	}
	// Var, which contains average number .
	average = tmp / vec.size();

	return average;
}


int Math::find_vector_median(vector<int> vec)
{
	// Sorting vector
	sort(vec.begin(), vec.end());
	

	int temp = 0;

	// size var contains vector size
	size_t size = vec.size();
	 
	// If vector size even, calculate in this way
	if (vec.size() % 2 == 0)
	{
		temp = (vec[size / 2 - 1] + vec[size / 2]) / 2;
	}
	else // else , by this way
	{
		temp = vec[size / 2];
	}

	return temp;
	 
}
int main()
{
	Math m;
	vector<int> i{ 3,5,5,2 };
	cout << m.find_vector_average(i) << endl;

	vector<int> vec = { 10,20,20,40 };

	cout << m.find_vector_median(vec);
	
	 
	
	return 0;
}
