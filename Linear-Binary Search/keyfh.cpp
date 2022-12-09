#include <iostream>
#include <memory>
#include <cstring>
#include <vector>
#include <array>

using namespace std;

template<typename T>
void foo(vector<T> obj, T key)
{
    cout << "Vector successfully set!" << endl; 
    for (int i = 0; i < obj.size(); ++i)
    {
        if (key != obj[i]) { cout << "no key found\n";}
        else if (key == obj[i]) { cout << key << " found in [" << i << "]"; }
    }
    
}

int main()
{   
    vector<int> obj = {5,4,3,2,1};
    foo(obj, 1);
    return 0;
}
