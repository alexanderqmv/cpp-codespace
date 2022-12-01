#include <iostream>
#include <assert.h>
using namespace std;

void foo(int* pointer)
{
    assert(pointer);
    *pointer = 0;    
}

int main()
{
    int *p = NULL;
    foo(p);
    return 0;
}
