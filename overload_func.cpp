#include <iostream>
#include <string>

void print(int v)
{
    std::cout << "int:" << v << std::endl;
}

void print(bool v)
{
    std::cout << "bool:" << v << std::endl;
}

void print(std::string v)
{
    std::cout << "std::string:" << v << std::endl;
}

void print(double v) {
	std::cout << "double: " << v << std::endl;
}

int main()
{
    print(1);
    print(true);
    print("Hello world");
    print(12.5);
}
