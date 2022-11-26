#include <iostream>
#include <iterator>



std::string reverse_t(std::string n)
{
    for (auto i = n.crbegin(); i != n.crend(); ++i)
    {

        std::cout << *i << " ";
    }

    return "Reversed successfully";

}

int main()
{

    std::string getit = "Hello,World!";

    reverse_t(getit);




    return 0;
}
