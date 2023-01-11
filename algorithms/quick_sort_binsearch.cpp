#include <iostream>
#include <algorithm>
using namespace std;




// Разделение по схеме Lomuto
// 9, -3, 5, 2, 6, 8, -6, 1, 3
int partition(int a[], int start, int end)
{
    // Выбираем крайний правый элемент в качестве опорного элемента массива
    int pivot = a[end];

    // элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
    // элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
    // равные элементы могут идти в любом направлении
    int pIndex = start;

    // каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
    // увеличивается, и этот элемент будет помещен перед опорной точкой.
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    // поменять местами `pIndex` с пивотом
    swap(a[pIndex], a[end]);

    // вернуть `pIndex` (индекс опорного элемента)
    return pIndex;
}

// Процедура быстрой сортировки
void quicksort(int a[], int start, int end)
{
    // базовое условие
    if (start >= end) {
        return;
    }

    // переставить элементы по оси
    int pivot = partition(a, start, end);

    // повторяем подмассив, содержащий элементы, меньшие опорной точки
    quicksort(a, start, pivot - 1);

    // повторяем подмассив, содержащий элементы, превышающие точку опоры
    quicksort(a, pivot + 1, end);
}

// C++ реализация алгоритма быстрой сортировки
int main()
{
    int a[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
   
    int n = sizeof(a) / sizeof(a[0]);

    quicksort(a, 0, n - 1);

    // печатаем отсортированный массив
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

/*
#include <stdio.h>

// Recursive implementation of the binary search algorithm to return
// the position of `target` in subarray nums[low…high]
int binarySearch(int nums[], int low, int high, int target)
{
    // Base condition (search space is exhausted)
    if (low > high) {
        return -1;
    }

    // find the mid-value in the search space and
    // compares it with the target

    int mid = (low + high)/2;	// overflow can happen
    // int mid = low + (high - low)/2;

    // Base condition (target value is found)
    if (target == nums[mid]) {
        return mid;
    }

    // discard all elements in the right search space,
    // including the middle element
    else if (target < nums[mid]) {
        return binarySearch(nums, low, mid - 1, target);
    }

    // discard all elements in the left search space,
    // including the middle element
    else {
        return binarySearch(nums, mid + 1, high, target);
    }
}

int main(void)
{
    int nums[] = { 2, 5, 6, 8, 9, 10 };
    int target = 5;

    int n = sizeof(nums)/sizeof(nums[0]);

    int low = 0, high = n - 1;
    int index = binarySearch(nums, low, high, target);

    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }

    return 0;
}
*/
