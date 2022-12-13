#include <iostream>

using namespace std;


struct A
{
    int h;


    // ключевое слово virtual в деструкторе вызывает деструктор и того класса, который наследует наш класс
    virtual ~A()
    {

        cout << "~A()" << endl;
    }
};

struct B : A
{
    ~B() 
    {
        cout << "~B() " << endl;
    
    }
};





int main(int argc, const char* argv[])
{
    A* a = new B;

    delete a;

    return 0;
}
