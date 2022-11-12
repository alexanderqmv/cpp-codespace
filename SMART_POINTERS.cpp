#include <iostream>
#include <cstdio>
#include <memory>

using namespace std;

template<typename T>
class SmartPointer
{
public:
	// SmartPointer Constructor
	SmartPointer(T* ptr)
	{
		// private (this)ptr == ptr(constructor)
		this->ptr = ptr;
	}

	// SmartPointer Destructor
	~SmartPointer() 
	{	
		// deleting pointer
		delete ptr;
	}

	T& operator*()
	{
		return *ptr;
	}
         
        

private:
	T* ptr;
};

int main(int argc, char const *argv[])
{
	SmartPointer<int> ipointer = new int(10);
	cout << *ipointer;

	SmartPointer<double> dpointer = new double(10.0020);
	cout << endl <<*dpointer;

	return 0;
}
