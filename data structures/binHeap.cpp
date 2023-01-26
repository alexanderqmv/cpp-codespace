#include <iostream>
#include <algorithm>

using namespace std;


#include <iostream>
#include <vector>

class BinaryHeap {
private:
    std::vector<int> heap; // declares a vector to store the heap elements

    int parent(int i) { return (i - 1) / 2; } // returns the index of the parent of the element at index i

    int left(int i) { return (2 * i + 1); } // returns the index of the left child of the element at index i

    int right(int i) { return (2 * i + 2); } // returns the index of the right child of the element at index i

    void heapify_up(int i) {
        while (i != 0 && heap[parent(i)] > heap[i]) { // compares the value of the current element to its parent
            std::swap(heap[i], heap[parent(i)]); // swaps the current element with its parent if the parent's value is greater
            i = parent(i); // updates the current element to be its parent
        }
    }

    void heapify_down(int i) {
        int minIndex = i;
        int l = left(i);
        if (l < heap.size() && heap[l] < heap[minIndex]) { // compares the value of the left child to the current element
            minIndex = l;
        }
        int r = right(i);
        if (r < heap.size() && heap[r] < heap[minIndex]) { // compares the value of the right child to the current element
            minIndex = r;
        }
        if (i != minIndex) {
            std::swap(heap[i], heap[minIndex]); // swaps the current element with the minimum value child
            heapify_down(minIndex); // recursively calls heapify_down on the new current element
        }
    }

public:
    BinaryHeap() {}  // default constructor 

    BinaryHeap(std::vector<int> v) {
        heap = v;
        int n = v.size();
        for (int i = (n / 2) - 1; i >= 0; i--) {
            heapify_down(i);
        }
    } // constructor that accepts a vector and creates heap from it

    int get_min() { return heap[0]; } // returns the minimum element from the heap

    int extract_min() {
        int min = heap[0];
        heap[0] = heap.back(); // replaces the root element with the last element in the vector
        heap.pop_back(); // remove the last element from the vector
        heapify_down(0); // maintains the heap property
        return min;
    }

    void insert(int key) {
        heap.push_back(key); // adds the new element to the end of the vector
        int i = heap.size() - 1;
        heapify_up(i); // maintains the heap property
    }
};


int main()
{

    BinaryHeap h;
    h.insert(3);
    h.insert(2);
    h.insert(1);
    std::cout << h.extract_min() << " ->  ";
    std::cout << h.get_min() << " | ";
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    std::cout << h.extract_min() << " ";
    std::cout << h.get_min() << " ";
	return 0;
}
