#include <iostream>
#include <memory>
#include <vector>

using namespace std;

template<typename T>
void foo(vector<T> vec, size_t key)
{
    
    for (int i = 0; i < vec.size(); ++i)
    {
        if (key != vec[i]) { cout <<"[" << i <<"] ⇛ key not found\n"; }

        else if (key == vec[i]) { cout << "[" << i << "] ⇛ key found\n"; }
 
    }

    auto min = vec[0];
    auto max = vec[0];
    for (int i = 0; i < vec.size(); ++i)
    {

        if (vec[i] < min)
        {
            min = vec[i];
        }
    }
    cout << "Minimal: " << min << endl;

    for (int i = 0; i < vec.size(); ++i)
    {

        if (vec[i] > max)
        {
            max = vec[i];
        }
    }
    cout << "Maximal: " << max << endl;

}

int main()
{

    vector<int> obj = {-1,99,45,245,2,991, 93, 73, 910, 0, 139, 482, 19394, 1933, 2007,2009,20013, 9, 0};
    foo(obj, 0);
    return 0;
}
