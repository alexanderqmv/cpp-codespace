#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


 
class QuickSort
{
private:
    vector<int>arr;
    int start{ 0 };
    int end{ 0 };

    void _sort(vector<int>& a, int start, int end)
    {

        if (a.empty()) { cerr << "[ERRMES] Please, fill the array first."; return; }

        if (start < end)
        {
            int left = start;
            int right = end;
            int mid = (left + right) / 2;
            do
            {

                while (a[left] < a[mid])
                {
                    ++left;
                }
                while (a[right] > a[mid])
                {
                    --right;
                }

                if (left <= right)
                {
                    swap(a[left], a[right]);
                    --right;
                    ++left;
                }

            } while (left <= right);
            _sort(a, start, right);
            _sort(a, left, end);
        }
    }
public:
    QuickSort(vector<int>& a, int _start, int _end)
        : arr(a), start(_start), end(_end)
    {
        if (!a.empty())
        {
            _sort(arr, start, end);
            cout << "Sorted successfully:\n";
            for (auto i : arr)
            {
                cout << i << " ";
            }
        }
        else
        {
            exit(1);
        }
    }

    ~QuickSort() { }

};

int main()
{
    vector<int> arr{ 15,134,9, 194, -14, -149, 95, 38, 81,0 };
    QuickSort qs(arr, 0, 9);
     
    return 0;
}
