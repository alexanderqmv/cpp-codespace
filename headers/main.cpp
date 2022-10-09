#include "include.hpp"

MAIN::MAIN(int n1, int n2)
{
	val1 = n1;
	val2 = n2;
}

int MAIN::Sum()
{
	return(val1+val2);
}


int main(int argc, char const *argv[])
{

	MAIN obj(6,2);
	cout << obj.Sum();
	
	return 0;
}
