#include <iostream>

using namespace std;

class Counter
{
    
    public:

        Counter(int sec)
        {
            seconds = sec;
        }

        void display() 
        {
            cout << "seconds " << seconds;
        }
    int seconds;

        
};

    Counter operator+(Counter x,  Counter y)
    {
        return Counter(x.seconds + y.seconds);  
    }


int main()
{
    Counter c1(10);
    Counter c2(20);
    Counter c3 = c1 + c2;
    
    c3.display();

    return 0;
}
