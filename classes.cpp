// Example:
 
#include<iostream>
using namespace std;
 
class A
{
    int x,i;
    bool getTrue;
    bool getFalse;
          public:
             
    A()
    {
        x=10;
        i = 100; 
        getFalse = false; // 0
        getTrue = true; // 1
        
    }
    friend class B;    //friend class
};
 
class B
{
    public:
        void display(A &c)
        {
            cout<<endl<<"The value of x="<<c.x;
        }   

        void resplay(A &t)
        {
        	cout << endl << "The value of x=" << t.x;
        }

        void getFalseOrTrue(A &t) 
        {
        	cout << endl << "1) True - " << t.getTrue << " 2) False - " << t.getFalse;
        }
};
 
int main()
{
    A _a;
    B _b;
    _b.display(_a);
    _b.resplay(_a);
    _b.getFalseOrTrue(_a);
    return 0;
}
