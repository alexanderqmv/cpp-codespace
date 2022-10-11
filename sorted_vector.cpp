#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
	std::vector<int> vec;
	int n;
	std::cout << "\n = ";
	std::cin >> n;
	for (int i = 0; i < n; i++) { // цикл ввода tmp от n
		int tmp;
		std::cin >> tmp;
		vec.push_back(tmp); // добавляет вводимые нами цисла в контейнер вектора
	}

	std::cout << "\nyour vector: \n";

	for (int i = 0; i < vec.size(); i++){
		std::cout << vec.at(i)<< " ";
	}

	std::sort(vec.begin(), vec.end()); // sorting 

	std::cout << "\nsorted: \n";


	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i) << " ";
	}

	std::cout << "\n";

	return 0;
}
