/*
  THIS PROGRAM CONTAINS EXAMPLES OF VECTORS,CLASSES,FUNCTIONS,POINTERSM ARITHMETIC FUNCTIONS, VECTOR+POINTER FUNCTIONS AND ETC.
  
  PLEASE, USE ACCURATE, IT CAN(MAYBE, NOT 100%) CONTAINS MEMORY LEAKS!
  
  PROGRAM COMPILES GOOD AND WORKING GOOD TOO.
  
  YOU CAN CUSTOMISE AND MAKE CHANGES IN CODES! 
  
  NO LICENSE IS HERE!
  
  ~AUTHOR~:: @YNWQMV
  
  THANKS!
  
  21:23
 
*/


#include <iostream>
#include <string>
#include <cmath>
#include <vector>


void * foo(std::vector<int>* a)
{
    std::cout << a->at(0) << a->at(1) << a->at(2) << std::endl;
    // expected result is "123"

    return 0;
}

class A {
	public:
		void arrFunction(void); //done

		int arithmeticFunction(int _k, int _t); //done

		int vectorFunction(); //done

	protected:
		int pointerFunction(int* x=new int(5)); // not done

};



int A::vectorFunction() {

	std::vector<int> *x = new std::vector<int>(100); 
	std::cout << x;
	std::cout << x->at(2);
	x->size();
	std::vector<int> &v = *x;
	v[2];

	x->push_back(10);
	x->push_back(100);



	delete x, &v;
	return 0;
}


int A::arithmeticFunction(int _k, int _t) {


	return cos(90) - sin(180) / _k + _t + 0.5; // 100

}	

void A::arrFunction(void) {

	int h[5] = {1,2,4,8,16};
	int p[10] = {32,64,128,256,512,1024,2048,4096,8192,16384};

	std::cout << "ALL ELEMENTS IN ARRAY 1 ::" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << h[i] << std::endl;
	} 
 	
	// p[0] + p[3] - p[1]

	std::cout << "ALL ELEMENTS IN ARRAY 2 ::" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << p[i] << std::endl;

	}


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= 5; j++) {
			std::cout  << "Sum of " << p[i] << " and " << p[j] << " :: " << p[i] + p[j] << std::endl;
		}
	}




}


// returns -21
int rFunction(unsigned int l) {

	return sin(90) + cos(90) / 2 * l;
}

int main(int argc, char const *argv[])
{

	A a;
	a.arrFunction();
	std::cout << rFunction(100); // -21
	std::cout  << std::endl << round(a.arithmeticFunction(10,100));
	std::cout << std::endl << a.vectorFunction();

	


	std::vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);

    std::cout << "\n" <<  foo(&b); // 123
		 
	return 0;
}
