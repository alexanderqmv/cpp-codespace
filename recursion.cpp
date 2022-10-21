#include <iostream>
 
void countOut(int count)
{
    std::cout << "push " << count << '\n';
 
    if (count > 1) // условие завершения
        countOut(count-1);
 
    std::cout << "pop " << count << '\n';
}
 
int main()
{
    countOut(4);
    return 0;
}


// function calling itself
