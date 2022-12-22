#include <iostream>
#include <string>
using namespace std;

class Lake
{
private:
	static int Lake_count;
public:
	string name;
	int area;
	Lake()
	{
		++Lake_count;
		cout << "Lake count=" << Lake_count << endl;
	}
	~Lake()
	{
		--Lake_count;
		cout << "Deleted: " << toString() << " Lake_count=" << Lake_count << endl;
	}
	static int get_Lake_count()
	{
		return Lake_count;
	}

	 

	string toString()
	{
		return ((string)typeid(this).name() + ": name: " + name + ", area: " + to_string(area));
	}

};

int Lake::Lake_count = 0;

int main(int argc, const char* argv[])
{
	Lake tba;
	cout << "Numbers of lakes: " << Lake::get_Lake_count() << endl;
	
	tba.name = "Pali";
	tba.area = 1230;

	cout << tba.toString() << endl;

	Lake* p = new Lake;
	cout << "Numbers of lakes: " << Lake::get_Lake_count() << endl;
	p->name = "Ohoho";
	p->area = 1000;
	
	 
	cout << endl;
	cout << p->toString() << endl;
	delete p;
	p = nullptr;	
	cout << "Numbers of lakes: " << Lake::get_Lake_count() << endl;
	


	return 0;
}
