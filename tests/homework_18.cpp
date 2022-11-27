#include <iostream>

using namespace std;

class MyAuto
{

    friend void set(int priceX, string markX);
private:
    int priceX;
    string markX;

public:


    MyAuto(int priceX, string markX)
    {
        this->priceX = priceX;
        this->markX = markX;
        cout << "set price successfully -> " << priceX;
        cout << "\nset mark successfully  -> " << markX;
        cout << "\n" << this << " - constructor address";
    }

    ~MyAuto()
    {

        cout << "\n" << this << " - destructor address" ; 
    }


};

void set(int priceX, string markX)
{
    priceX+=15000;
    cout << "\n\nFee(15%) -> " << priceX << "$";
}

int main()
{

    MyAuto(250000, "Mercedes");

    cout << endl;
    cout << endl;
    MyAuto(435000, "Buggati");
    
    set(435000, "Buggati");

    return 0;
}
