#include <iostream>

using namespace std;


struct A
{
    int b;
};

struct B : virtual A
{

};

struct C : virtual A
{
     int h;
};

struct D : B,C
{

};

int main(int argc, const char* argv[])
{
    D d;

    return 0;
}
