#include <iostream>
#include <vector>
//#include <iterator>
#include <algorithm>

using namespace std;


class A
{
    A(const A&) = delete;
    A(A&&) noexcept = delete;
    A& operator=(const A&) = delete;
    A& operator=(const A&&) noexcept = delete;

};

int main()
{
    vector<int> vec = {5,4,3,2,1};

    sort(vec.begin(), vec.end());

    for (auto v : vec)
        cout << v << " ";
    
    return 0;    
}
