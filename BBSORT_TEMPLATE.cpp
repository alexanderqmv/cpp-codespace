#include <iostream>
#include <array>

using namespace std;

template<typename T>
inline void t_swap(T & x, T & y)
{
	T temp(x);
	x = y;
	y = temp;
}

template<typename element_t>
inline void sort_this(element_t* arr, element_t arrSize)
{
	for (size_t i = 0; i < arrSize; ++i)
	{
		for(size_t j = i + 1; j < arrSize; ++j)
		{
			if (arr[i] > arr[j])
			{
				t_swap(arr[i], arr[j]);
			}
		}

	}

}

template<typename element_t>
inline void outprnt(const element_t* arr, element_t arrSize)
{
	for (size_t i = 0; i < arrSize; ++i)
	{
		cout << arr[i] << " ";
	}
}

int main () 
{
	const int n = 5;
	int arr[n] = {5,4,3,2,1};
	outprnt(arr,n);

	sort_this(arr,n);
	cout << endl;
	outprnt(arr,n);
	return 0;
}
