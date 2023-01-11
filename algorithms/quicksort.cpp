#include "Header.h"

using namespace std;

 

void qs(int* s_arr, int first, int last)
{
	if (first < last)
	{
		int left = first;
		int right = last;
		int middle = s_arr[(left + right) / 2];
		do
		{ // 4,18,9,0,90,8,0,88,9,7,18,1,22 
			while (s_arr[left] < middle)
			{
				++left;
			}
			while (s_arr[right] > middle)
			{
				--right;
			}
			if (left <= right)
			{
				swap(s_arr[left], s_arr[right]);
				++left;
				--right;
			}
		} while (left < right);
		qs(s_arr, first, right);
		qs(s_arr, left, last);
			 
	}
	return;

}

int main()
{
	int a[_SIZE_]{ 4,18,9,0,90,8,0,88,9,7,18,1,22 };

	

	qs(a, 0, _SIZE_ - 1);

	for (int i = 0; i < _SIZE_; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
