#include <array>
#include <cstdio>
#include <iostream>

using namespace std;

template<typename T>
class sort_t {

	private:
		int temp, pass = 0;

	public:
		
		inline void swap_t(T & first, T & second)
		{

			T temp(first);
			first = second;
			second = temp;
		}



		inline void b_sort_t(T *arr, size_t arrSize)
		{
			for (size_t i = 0; i < arrSize; ++i)
			{
				for (size_t j = i + 1; j < arrSize; ++j)
				{
					if (arr[i] > arr[j])
					{
						swap_t(arr[i], arr[j]);
					}
				}
			}
		}

		sort_t(T* arr, size_t arrSize)
		{
			b_sort_t(arr,arrSize);
		}
};

 
template<typename T>
void output_t(T *arr, size_t arrSize)
{
	for (size_t i = 0; i < arrSize; ++i)
	{
		cout << arr[ i ] << " ";
	}

}

int main () 
{

	const size_t n = 5;
	int arr[n] = {5,4,3,2,1};

	output_t(arr,n);

	cout << endl;

	sort_t(arr,n);

	output_t(arr,n);

	 


	return 0;
}
