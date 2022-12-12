#include <iostream>
#include <vector>
#include <exception>

std::int64_t get_max(std::vector<int>& vec)
{
    int64_t max = vec[0];
    
    if (vec.size() == NULL)
    {
        std::cerr << "Vector is empty";
    }
    
    for (int i = 0; i < vec.size(); ++i)
    {
        if (max < vec[i])
        {
            max = vec[i];    
        }
        
    }
    
    return max;
}

std::int64_t get_min(std::vector<int>& vec)
{
 
 if (vec.size() == NULL)
 {
    return 0;   
 }
 
 int min = vec[0];
 
 for (int i = 0; i < vec.size(); ++i)
 {
    if (min > vec[i]) 
        min = vec[i];
 }
 return min;
    
}

int main()
{
    std::vector<int> vec = {10,4001, 4014,4919,49549, 9 , 3 ,3 ,3};
    std::cout << get_max(vec);
    std::cout << std::endl;
    std::cout << get_min(vec);
    return 0;
}
