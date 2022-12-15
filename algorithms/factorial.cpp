#include <iostream>
namespace factor_recursion {
int factor(int n)
{
    if (n <= 0)
    {
        return 1;
    }

    return n * factor(n - 1);
}
}

namespace factor_loop
{

int factor(int n)
{
    if (n < 1)
    {
        return 1;
    }
    int temp = 1;
    for (int i = 2; i <= n; ++i)
    {
        temp = temp * i;
    }

    return temp;
}
}

int main(int argc, const char *argv[])
{
    std::cout << factor_recursion::factor(5) << std::endl;
    std::cout << factor_loop::factor(4);
    return 0;
}
