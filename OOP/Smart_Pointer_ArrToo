#include <iostream>

template <typename T>
class SmartPointer {
private:
    T* ptr_;  // Pointer to the resource being managed
    bool is_array_;  // Flag indicating whether the resource is an array
    size_t size_ = 0;  // Size of the array (if is_array_ is true)

public:
    // Constructor for a single value
    explicit SmartPointer(T* ptr) : ptr_(ptr), is_array_(false) {}

    // Constructor for an array
    SmartPointer(T* ptr, size_t size) : ptr_(ptr), is_array_(true), size_(size) {}

    // Destructor
    ~SmartPointer() {
        if (is_array_) {
            delete[] ptr_;
        }
        else {
            delete ptr_;
        }
    }

    // Overloading dereference operator (for a single value)
    T& operator*() { return *ptr_; }

    // Overloading arrow operator (for a single value)
    T* operator->() { return ptr_; }

    // Overloading array subscript operator (for an array)
    T& operator[](size_t index) { return ptr_[index]; }

    // Size function (for an array)
    size_t size() const { return size_; }
};


int main() {
    // Create a new integer and wrap it in a smart pointer
    SmartPointer<int> ptr1(new int(42));

    // Use the smart pointer like a normal pointer
    *ptr1 = 50;
    std::cout << *ptr1 << std::endl;  // Outputs 50

    // Create a new array of integers and wrap it in a smart pointer
    SmartPointer<int> ptr2(new int[10], 10);

    // Use the smart pointer like a normal array
    for (size_t i = 0; i < ptr2.size(); i++) {
        ptr2[i] = i * i;
    }

    for (size_t i = 0; i < ptr2.size(); i++) {
        std::cout << ptr2[i] << " ";
    }
    std::cout << std::endl;  // Outputs 0 1 4 9 16 25 36 49 64 81

    return 0;
}
