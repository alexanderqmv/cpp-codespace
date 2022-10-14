#include "include.h" 

 
 
class A {
private:
	int x;
	int y;

public:


	A(int valueX, int valueY) {
		x = valueX;
		y = valueY;
	}

	int print() {
		cout << "X = " << x<< " Y = " << y; 
		return 0;
	}
};



int main(int argc, char const *argv[])
{
	
	A a(10,100);
	a.print();

	int x= 10,y = 15;
	cout << endl << max(x,y) + min(x,y);

	vector<string> sdata = {
		"Alex", "Malex", "Salex"

	};

	string names[] = {
		"i - ", "i love you like a ", " love song ",
		"baby", " i , i - ", " love you like a", " love song baby",
		"i - ", " love you loveee sooong baaaby", " and i can repee", " peee peee peeeaattt ~oooh"

	};

	for (string i : names) {
		cout << i;
	}
 
	cout << endl;
	for (string i : sdata) {
		cout << i << " ";
	}

	cout << endl;


	vector<int> idata = {1,2,6,4,7,8,11,45,123,5,4576,132,5134,51,35,15,4,51,3890,491,495,1591,5901};
	sort(idata.begin(), idata.end()); // sorting

	cout << endl;
	for (int i = 0; i < idata.size(); i++) {
		cout << idata.at(i) << " ";
	}
	cout << "\n";

	cout << idata[3];

	cout << endl;
	vector<int> vec = {100,1000,10000,100000,1000000,100000000};

	for ( int i : vec) {
		cout << i << "   ";
	}

	vec.emplace_back(vec[5] / vec[4] / 10);
	
	cout << endl;
	for(int i : vec) {
		cout << i << "   ";
	}

	return 0;
}
