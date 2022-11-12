#include <iostream>
#include <vector>
#include <list>
#include <array>

using namespace std;

template<typename T>
class smart_ptr
{
public:
	smart_ptr(T* ptr)
	{
		this->ptr = ptr;
	}
	~smart_ptr()
	{
		 
		delete ptr;
		cout << "\n\n*** Memory free success ***\n";
	}

	T& operator*()
	{
		return *ptr;
	}

private:
	T* ptr;

};


template<typename L>
void PrintList(const list<L> &listt)
{
	for(auto i = listt.cbegin(); i != listt.cend(); ++i)
	{
		cout << *i << " ";
	}
}

int main(int argc, char const *argv[])
{
	smart_ptr<int> ptr = new int(10);
	smart_ptr<double> ptrr = new double(100);

	cout << *ptr;
	cout << endl << *ptrr;

	list<int> lst;

	lst.push_front(10);
	lst.push_back(100);

	cout << endl << endl;
	PrintList(lst);

	list<float> lists = {12,45,0,3,9,50};
	lists.sort();

 

	cout << endl;
	PrintList(lists);

	cout << endl;
	lists.reverse();
	PrintList(lists);

	cout << endl;



	return 0;
}
