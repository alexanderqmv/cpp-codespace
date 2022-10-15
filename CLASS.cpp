#include "include.h"

#define X 10 


class Simple {

	private:
		int i1;
		int i2;
	public:

		Simple(int j1, int j2) {
			this->i1 = j1;
			this->i2 = j2;
		}

		int function(int j, int i);

		struct structure;

		int useStructure(structure &year_in_days);

		 
		
};

int Simple::useStructure(structure &year_in_days) 
{
	 

	cout << &year_in_days;

	return 0;
}

struct Simple::structure
{
	const int year_in_days = 365;
	const int week_in_days = 7;
	const int month_in_dats = 30;

};

int Simple::function(int j, int i)  {
			
	this->i1 = j;
	this->i2 = i;

	cout << endl << j << endl;

	return j + i;
}
 

int main(int argc, char const *argv[])
{
	Simple simple(10,20);
	
	cout << simple.function(5,10);

	

	return 0;
}

 

