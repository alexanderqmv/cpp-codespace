/* DEVELOPED BY: @ynwqmv */
#include <iostream>
#include <vector>
#include <assert.h>
#include <iterator>

using std::cout;
using std::cin;



bool elemRemove(std::vector<int> &vec, int elem)
{
    if (elem > vec.size() || elem < 1)
    {
        assert(elem);
    }

    for (int i = elem - 1; i < vec.size() - 1; ++i)
    {
        vec[i] = vec[i + 1];
    }
    vec.resize(vec.size() - 1);

    
    
    return true;
}


int main(int argc, const char* argv[])
{
    std::vector<int> f = {1,2,3,4,5};

    elemRemove(f, 2);

    for (auto n : f)
    {
        cout <<  n << " ";
    }

    return 0;
}
