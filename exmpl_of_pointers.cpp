#include <iostream>
#include <stdio.h>
#include <cmath>






int main(int argc, char const *argv[])
{
	int i = 10;
	int *pi = &i;
	int **ppi = &pi;
	int ***pppi = &ppi;
	 
	static int arr;
	
	
	std::cout << arr++ << std::endl;
	std::cout << arr++ << std::endl;
	std::cout << arr++ << std::endl;
	


	printf("%d\t", i);
	*pi = 20;
	printf("%d\t", i);
	(*(*ppi)) = 30;
	printf("%d\t", i);
	***pppi = 40;
	printf("%d\t", i);



	std::cout << std::endl << pi;
	std::cout << std::endl << ppi;
	std::cout << std::endl << pppi;

	int* array;
	array = new int[10];
 	
 	array[0] = 10;
 	array[1] = 20;
 	array[2] = 30;
 	array[3] = 40;
 	array[4] = 50;
 	array[5] = 60;
 	array[6] = 70;
 	array[7] = 80;
 	array[8] = 90;
 	array[9] = 100;

 	std::cout << std::endl << array[9] / array[0] << std::endl; // 10


 	double* d_array;
 	d_array = new double[5];

 	d_array[0] = 1.1;
 	d_array[1] = 2.2;
 	d_array[2] = 3.3;
 	d_array[3] = 4.4;
 	d_array[4] = 5.5;

 	std::cout << round(d_array[3] + d_array[4] / d_array[1] * d_array[0] + 0.4 + 2); // 10

 	delete[] array,d_array,pi,ppi,pppi;





	return 0;
}
