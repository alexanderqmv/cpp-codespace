#include <iostream>

const int MAX_SIZE = 10;

int main()
{
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    int index{ 0 };
    std::cout << "\nEnter index of element to remove: ";
    std::cin >> index;
    

    // shift all elements after index 5 one position to the left
    for (int i = index; i < size - 1; i++)
    {
        
        arr[i] = arr[i + 1];
        
    }

    // decrease the size of the array by 1
    size--;

    // print the updated array
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
