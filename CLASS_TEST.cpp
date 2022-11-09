#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

class Class 
{
private:
	int temp = 32, pass = 0;
	string i = "Zelimxan Usupov";
public:

	int R_MET(int setThis){

		this->temp = setThis;
		return temp;
	}

	Class &setOne(int num) {

		this->temp = num;
		num != pass;
		
		++pass;
		
		cout << num << " " << pass;
		return *this;
	}
	Class &setStr(string snum)
	{
		cout << snum;

		return *this;
	}

	~Class() {
		cout << "\n\nDestroyed class successfully";
	}

	
};
 
int main(int argc, char const *argv[])
{
 	Class cls;
 	int i = 10;
 	cls.setOne(cls.R_MET(i)).setStr("\n\nHello,World");
	

	return 0;
}
