#include <iostream>
#include <thread>
#include <mutex>

using namespace std;




struct ClassImplementation {
private:
	int alexey = 511;
public:
	ClassImplementation() {
		cout << "hahahaha" << endl;
	}
	~ClassImplementation() {
		cout << "hohohoho" << endl;
	}
	
	string helloworld = "hello,world";
protected:

	void print() { }
};

int main() {
	ClassImplementation* d;

	d = new ClassImplementation;
	 
	
	
	// without it, the destructor won't be called, so it means there will be memory leak
	delete d;

}
