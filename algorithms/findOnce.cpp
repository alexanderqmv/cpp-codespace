/*

Этот код представляет собой программу на C++, которая находит элемент, 
который появляется в массиве только один раз. Программа содержит две части: 
              функцию findSingle и основную функцию.

Функция findSingle принимает два входных сигнала: массив целых чисел и его размер.
Функция начинается с создания неупорядоченной карты с именем count. Это особый вид 
структуры данных, который может использоваться для хранения пар ключ-значение, 
         где ключ является целым числом, а значение - целым числом.

Затем функция использует цикл for для перебора массива. Для каждого элемента в массиве
он увеличивает значение соответствующего ключа в карте подсчета на 1. Это означает, что
после цикла for карта подсчета будет содержать количество раз, когда появляется каждый элемент в массиве.

Затем функция использует другой цикл for для повторной итерации по массиву. Для каждого элемента в массиве
он проверяет, равно ли значение соответствующего ключа в карте подсчета 1. Если это так, это означает, что 
      элемент появляется в массиве только один раз, поэтому функция возвращает этот элемент.

Если функция не находит никаких элементов, которые появляются только один раз, она возвращает -1.
Основная функция - это точка входа в программу. Он начинается с создания массива целых чисел с именем arr 
и инициализации его некоторыми значениями. Затем он вычисляет размер массива путем деления общего размера 
                 массива на размер одного элемента массива.
Затем он вызывает функцию findSingle, передавая ей массив и его размер в качестве входных данных. Функция 
возвращает элемент, который появляется в массиве только один раз, и он выводится на консоль с помощью инструкции cout с сообщением.


______________________________________________________________________________________________________________________________________

Этот код создает неупорядоченную карту с именем count, в которой будет храниться количество вхождений каждого элемента во входном массиве.

Первая строка кода создает счетчик объектов unordered_map с ключами типа int и значениями типа int.
std::unordered_map<int, int> count;

Следующая часть кода использует цикл for для перебора входного массива. Цикл for начинается с первого элемента массива (индекс 0) и 
продолжается до конца массива (размер индекса-1).
for (int i = 0; i < size; i++) {

For each element in the array, the code uses the following line:
count[arr[i]]++;

Эта строка кода использует текущий элемент массива (arr[i]) в качестве ключа для доступа к соответствующему значению в unordered_map (count[arr[i]]). Затем он увеличивает это значение на 1.

В результате после цикла for карта count будет содержать количество раз, когда появляется каждый элемент в массиве.

Например, если массив содержит элементы [1, 2, 3, 2, 1, 4, 4], карта будет выглядеть следующим образом:

count[1] = 2
count[2] = 2
count[3] = 1
count[4] = 2


Это означает, что 1 появляется дважды, 2 появляется дважды, 3 появляется один раз и 4 появляется дважды.

Это очень эффективный способ подсчитать количество вхождений каждого элемента в массиве, потому что unordered_map 
имеет временную сложность O(1) для операций вставки и извлечения.

*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int findOnce(const vector<int>& vec)
{
	unordered_map<int, int> count;
	for (int i = 0; i < vec.size(); ++i)
	{
		count[vec[i]]++;
	}

	
	for (int i = 0; i < vec.size(); ++i)
	{
		if (count[vec[i]] == 1)
		{
			return vec[i];
		}
	}
	return -1;
}


int main(int argc, const char* argv[])
{


	vector<int> vec{ 1,1,1,2,2,2,3,3,3,4 };
	int res = findOnce(vec);
	cout << res;

	return 0;
}