#include "include.h"


int main(int argc, char const *argv[])
{
	
	 
	string students[10] = {
    "Иванов", "Петров", "Сидоров",
    "Ахмедов", "Ерошкин", "Выхин",
    "Андеев", "Вин Дизель", "Картошкин", "Чубайс"
};	
	 
	cout << students << endl;
	
	for (int i = 0; i < 10; i++) {

		cout << students[i] << "\t";
	}

	int array[10];

	for (int i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> 	array[i];
	}

	cout << "your array[]: " << endl;

	for (int i = 0; i<10; i++) {
		cout << array[i] << "  ";
		cout << endl;
		 

	}



	return 0;
}
