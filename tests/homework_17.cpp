#include <iostream>

using namespace std;

class Class
{
    public:
        int a = 10;
        void print() { cout << a << endl; }

    protected:
        int X = 134;

};


struct Struct : protected Class
{
    int a = 22;

    int x = 100;
    int y = 50;

    void swap_t(int arr[], const int size)
    {
        cout << x ;
    }
    
    void print() { cout << a << endl; cout << X << endl; }

    
    
   

};
int main()
{
    Class c;
    Struct s;

    
    

    c.print();

    s.print();



    return 0;
}
