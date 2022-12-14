#include <iostream>
#include <vector>

int main(int argc, const char *argv[])
{

    std::vector<int> vec = {1,2,3,4,5};

    std::vector<int> mvec = std::move(vec);

    std::vector<int> nmvec = {mvec.begin(), mvec.end()};
    std::vector<int> nano{nmvec.begin(), nmvec.end()};

    std::cout << nano.capacity();
    nano.clear();

    
    
    for (auto i : nano)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl
    << sizeof(vec) << std::endl
    << sizeof(mvec);

    return 0;
}
